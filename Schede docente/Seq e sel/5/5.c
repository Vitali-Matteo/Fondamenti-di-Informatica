#include<stdio.h>

int main(){

  int n1, n2;
  float M;

  printf("Inserisci i due valori separati da uno spazio: ");
  scanf("%d %d", &n1, &n2);

  M = (float)(n1 + n2) /2.0f;

  printf("La media tra i due valori è: %f. \n", M);

  return 0;

}

  
