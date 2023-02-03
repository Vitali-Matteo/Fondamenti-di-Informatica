#include<stdio.h>

#define L 5

int main(){

  int v[L], cv[L];

  int i, Max, prosegui;

  for(i = 0; i < L; i++){

    do{

      printf("Inserisci elemento %d del vettore: ", i + 1);
      scanf("%d", &v[i]);

      cv[i] = v[i];

    }while(v[i] < 0);

  }

  printf("\n");

  Max = v[0];

  for(i = 0; i < L; i++){

    if(v[i] > Max){

      Max = v[i];

    }

  }

  do{

    prosegui = 0;

    for(i = 0; i < L; i++){

      if(v[i] == Max){

	printf("* ");

	v[i] = v[i] - 1;

      }
      else{

	printf("  ");

	if(v[i] != 0){

	  prosegui = 1;

	}

      }

    }

    Max = Max - 1;

    printf("\n");

  }while(prosegui);

  printf("\n");

  for(i = 0; i < L; i++){

    printf("%d ", cv[i]);

  }

  printf("\n");

  return 0;

}

  
