#include<stdio.h>

#define PI 3.14f

int main(){

  float R;

  printf("Inserisci il raggio del cerchio: ");
  scanf("%f", &R);

  printf("L'area del cerchio è: %f. \nMentre, il perimetro è: %f.\n", PI * R * R, 2 * PI * R);

  return 0;

}
