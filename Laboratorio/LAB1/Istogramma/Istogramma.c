#include<stdio.h>

#define L 10

int main(){

  int v[L], c[L];

  int i, k, Max;

  for(i = 0; i < L; i++){

    do{

      printf("Inserisci l'elemento dell'array di posizione %d: ", i + 1);
      scanf("%d", &v[i]);

      c[i] = v[i];

    }while(v[i] < 0);

  }

  Max = 0;

  for(i = 0; i < L; i++){

    if(Max < v[i]){

      Max = v[i];

    }

  }

  printf("\n");

  for(k = 0; k < Max; k++){

    for(i = 0; i < L; i++){

      if(v[i] == Max - k){

	printf(" * ");

	v[i] = v[i] - 1;

      }
      else{

	printf("   ");

      }

    }

    printf("\n");

  }

  for(i = 0; i < L; i++){

    printf(" %d ", c[i]);

  }

  printf("\n");

  return 0;

}
