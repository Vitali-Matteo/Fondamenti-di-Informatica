#include<stdio.h>

void Abaco(int n);

int main(){

  int n;

  printf("Inserisci un numero intero: ");
  scanf("%d", &n);

  Abaco(n);

  return 0;

}

void Abaco(int n){

  int molt;

  molt = 1;

  while(n > 0){

    printf("%d * %d    %d\n", (n % 10), molt, n);

    n = n / 10;

    molt = molt * 10;

  }

}
  
