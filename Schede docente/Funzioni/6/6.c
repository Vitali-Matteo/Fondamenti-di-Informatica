#include<stdio.h>

#define N 100

int FillArray(int v[], int Lmax);

void PrintBack(int v[], int La);

int main(){

  int v[N];

  int La;

  printf("Inserisci l'array: \n");

  La = FillArray(v, N);

  printf("Stampo l'array dalla fine: \n");

  PrintBack(v, La);

  return 0;

}

int FillArray(int v[], int Lmax){

  int i;

  int n;

  i = 0;

  scanf("%d", &n);

  while((i < Lmax) && (n != 1000)){

    v[i] = n;

    i++;

    scanf("%d", &n);

  }

  return i;

}

void PrintBack(int v[], int La){

  int i;

  for(i = La - 1; i >= 0; i--){

    printf("%d  ", v[i]);

  }

  printf("\n");

}

    
