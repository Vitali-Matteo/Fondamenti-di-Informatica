#include<stdio.h>

int main(){

  int n;

  printf("Inserisci il numero che vuoi invertire: ");
  scanf("%d", &n);

  printf("Il numero %d invertito è: %d%d. \n", n, n % 10, n / 10);

  return 0;

}
