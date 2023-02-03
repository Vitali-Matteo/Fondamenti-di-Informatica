#include<stdio.h>

int main(){

  int n;

  printf("Inserisci il numero n da invertire: ");
  scanf("%d", &n);

  printf("Il numero %d invertito diventa: %d%d%d. \n", n, n % 10, (n % 100 - n % 10) / 10, (n % 1000 - n % 100)/100);
  
  return 0;

}
