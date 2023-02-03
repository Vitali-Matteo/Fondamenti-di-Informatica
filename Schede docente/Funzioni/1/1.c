#include<stdio.h>

void Max_min(int a, int b, int* Max, int* min);

int main(){

  int a, b;

  int Max, min;

  printf("Inserisci il primo numero: ");
  scanf("%d", &a);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &b);

  Max_min(a, b, &Max, &min);

  printf("Il massimo tra %d e %d è: %d. Il minimo è: %d.\n", a, b, Max, min);

  return 0;

}

void Max_min(int a, int b, int* Max, int* min){

  if(a > b){

    *Max = a;

    *min = b;

  }
  else{

    *Max = b;

    *min = a;

  }

}
