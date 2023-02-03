#include<stdio.h>

int main(){

  int n1, n2;

  printf("Inserisci il primo numero: ");
  scanf("%d", &n1);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &n2);

  if(n1 > n2){

    printf("Il maggiore tra i due numeri è: %d.\n", n1);

  }
  else{

    if(n1 == n2){

      printf("I due numeri sono uguali. \n");

    }
    else{

      printf("Il maggiore tra i due numeri è: %d.\n", n2);

    }

  }

  return 0;

}
