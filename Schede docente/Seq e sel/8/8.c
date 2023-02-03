#include<stdio.h>

int main(){

  int n50, n20, n10, n5;

  printf("Inserisci il numero di banconote da 50, 20, 10 e 5 separato da un carattere |: ");

  scanf("%d | %d | %d | %d", &n50, &n20, &n10, &n5);

  printf("Nel portafogli hai un totale di: %d. \n", 50 * n50 + 20 *n20 + 10 * n10 + 5 * n5);

  return 0;

}
