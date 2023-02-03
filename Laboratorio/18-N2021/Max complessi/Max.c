#include<stdio.h>
#include<math.h>

#define MAX 100

typedef struct _Complesso_t{

  float x;

  float y;

  float phi;

}Complesso_t;

int main(){

  Complesso_t C[MAX];

  int La;

  int i;

  Complesso_t CMMax, CFmin;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > MAX));

  for(i = 0; i < La; i++){

    printf("Inserisci il numero complesso uno nella forma x y e phi: ");
    scanf("%f %f %f", &C[i].x, &C[i].y, &C[i].phi);

  }

  CMMax = C[0];

  CFmin = C[0];

  for(i = 0; i < La; i++){

    if((CMMax.x * CMMax.x) + (CMMax.y + CMMax.y) < (C[i].x * C[i].x + C[i].y * C[i].y)){

      CMMax = C[i];

    }

    if(CFmin.phi > C[i].phi){

      CFmin = C[i];

    }

  }

  printf("Numero complesso con modulo maggiore: %f, %f, %f. \n", CMMax.x, CMMax.y, CMMax.phi);

  printf("Numero complesso con modulo minore: %f, %f, %f. \n", CFmin.x, CFmin.y, CFmin.phi);

  return 0;

}
