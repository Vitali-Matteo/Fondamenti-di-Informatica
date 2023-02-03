#include<stdio.h>

int main(){

  int Gsp, Gpi, Puc, Itn, Chd;

  printf("Inserisci l'ISBN che vuoi considerare: ");
  scanf("%d-%d-%d-%d-%d", &Gsp, &Gpi, &Puc, &Itn, &Chd);

  printf("Prefisso GS1: %d. \n", Gsp);
  printf("Identificativo del gruppo: %d. \n", Gpi);
  printf("Codice della casa editrice: %d. \n", Puc);
  printf("Numero articolo: %d. \n", Itn);
  printf("Cifra di controllo: %d. \n", Chd);

  return 0;

}
