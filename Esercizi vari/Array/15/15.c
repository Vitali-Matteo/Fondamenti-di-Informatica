#include<stdio.h>

#define L 5

int main(){

  int v[L];

  int i;

  int Max, min;

  printf("Inserisci i %d numeri separati da uno spazio: \n", L);

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

  if(Max - min + 1 == L){

    printf("1");

  }
  else{

    printf("0");

  }

  printf("\n");

  return 0;

}
