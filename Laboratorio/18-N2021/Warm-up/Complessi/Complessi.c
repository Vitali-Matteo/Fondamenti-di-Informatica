#include<stdio.h>
#include<math.h>

typedef struct _Complesso_t{

  float x;

  float y;

  float phi;

}Complesso_t;

int main(){

  Complesso_t c1, c2, s;

  printf("Inserisci il numero complesso uno nella forma x y e phi: ");
  scanf("%f %f %f", &c1.x, &c1.y, &c1.phi);

  printf("Inserisci il numero complesso due nella forma x y e phi: ");
  scanf("%f %f %f", &c2.x, &c2.y, &c2.phi);

  s.x = c1.x + c2.x;

  s.y = c1.y + c2.y;

  s.phi = atan(s.y / s.x);

  printf("Numero complesso somma: %f %f %f. \n", s.x, s.y, s.phi);

  if(atan(c1.y / c1.x) == atan(c2.y / c1.y)){

    printf("Numeri complessi in fase. \n");

  }
  else{

    printf("Numeri complessi non in fase. \n");

  }

  return 0;

}
