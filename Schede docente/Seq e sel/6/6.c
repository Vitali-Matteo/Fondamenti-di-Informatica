#include<stdio.h>

int main(){

  float F;
  float Pf;
  int Pi;

  printf("Inserisci il numero desiderato: ");
  scanf("%f", &F);

  Pf = F -(int)F;

  Pi = F - Pf;

  printf("Il numero %f è scrivibile come: parte intera %d e parte frazionaria %f.\n", F, Pi, Pf);

  return 0;

}
  
