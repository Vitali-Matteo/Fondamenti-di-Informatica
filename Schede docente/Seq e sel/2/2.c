#include<stdio.h>

int main(){

  float Tc;

  printf("Inserisci la temperatura in Celsiuls da convertire: ");
  scanf("%f", &Tc);

  printf("La temperatura in gradi Fahrenheit è: %f.\n", 1.8 * Tc + 32);

  return 0;

}
