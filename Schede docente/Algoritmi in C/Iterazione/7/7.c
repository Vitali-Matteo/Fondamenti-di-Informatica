#include<stdio.h>

int main(){

  int a, b, S;

  S = 0;

  printf("Inserisci i due valori separati da uncarattere $: ");
  scanf("%d $ %d", &a, &b);

  printf("%d %d", a, b);

  S = S + a * (a >= b) + b * (b >= a);

  while((a > b) || (b > a)){

    S = S + (a > b) * b + (b > a) * a;

    a = a + 1 * (b > a);

    b = b + 1 * (a > b);

  }

  printf("La somma dei valori compresi è: %d. \n", S);

  return 0;

}
