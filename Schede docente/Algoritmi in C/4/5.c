#include<stdio.h>

int main(){

  int Imp;

  printf("Inserisci l'importo da convertire: ");
  scanf("%d", &Imp);

  printf("Per ottenere %d euro devi utilizzare: %d banconote da 5 euro e %d monete da 1 euro.\n", Imp, Imp / 5, Imp % 5);

  return 0;

}
