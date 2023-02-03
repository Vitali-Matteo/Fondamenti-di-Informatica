#include<stdio.h>

void Scomponi(int n);

int main(){

  int n;

  do{

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

  }while(n < 0);

  Scomponi(n);

  return 0;

}

void Scomponi(int n){

  int i, e;

  int copian;

  int P = 1;

  i = 2;

  copian = n;

  while((i <= n) && (P != n)){

    if(n % i == 0){

      e = 0;

      while(n % i == 0){

	e++;

	n = n / i;

	P = P * i;

      }

      n = copian;

      printf("Fattore: %d con esponente %d. \n", i, e);

    }

    i = i + 1;

  }

}
