#include<stdio.h>

#define N 100

void Riempi(int A[], int B[], int Ne);

int Narciso(int n);

int main(){

  int A[N], B[N];

  int Ne;

  int i;

  do{

    printf("Inserisci il numero di elementi dell'array: ");
    scanf("%d", &Ne);

  }while((Ne < 0) || (Ne > N));

  printf("Inserisci gli elementi del vettore A: \n");

  for(i = 0; i < Ne; i++){

    scanf("%d", &A[i]);

    B[i] = 0;

  }

  Riempi(A, B, Ne);

  printf("Stampo il vettore B: \n");

  for(i = 0; i < Ne; i++){

    printf("%d ", B[i]);

  }

  return 0;

}

int Narciso(int n){

  int cf;
  
  int Cn;

  int S;

  S = 0;

  Cn = n;

  while(n > 0){

    cf = n % 10;

    n = n / 10;

    S = S + cf * cf * cf * cf;

  }

  if(S == Cn){

    return 1;

  }
  else{

    return 0;

  }

}

void Riempi(int A[], int B[], int Ne){

  int i;

  for(i = 0; i < Ne; i++){

    B[i] = Narciso(A[i]);

  }

}
