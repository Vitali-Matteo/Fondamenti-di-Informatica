#include<stdio.h>

int main(){

  int n;

  do{

    printf("Inserisci un valore intero: ");
    scanf("%d", &n);

  }while(n <= 0);

  printf("Hai inserito il numero positivo: %d. \n", n);

  return 0;

}
