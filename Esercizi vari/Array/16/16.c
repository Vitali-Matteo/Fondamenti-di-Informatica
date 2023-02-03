#include<stdio.h>

#define L 10

int main(){

  int v[L];

  int i, k;

  int Max, min;

  int Prosegui;

  printf("Inserisci i %d elementi del vettore: \n", L);

  for(i = 0; i < L; i++){

    scanf("%d", &v[i]);

  }

  Max = v[0];

  min = v[0];

  for(i = 0; i < L; i++){

    if(v[i] > Max){

      Max = v[i];

    }

    if(v[i] < min){

      min = v[i];

    }

  }

  Prosegui = 1;

  for(i = Max; i >= min && Prosegui; i--){

    Prosegui = 0;

    for(k = 0; k < L; k++){

      if(v[k] == i){

	Prosegui = 1;

      }

    }

  }

  printf("%d \n", Prosegui);

  return 0;

}

    
