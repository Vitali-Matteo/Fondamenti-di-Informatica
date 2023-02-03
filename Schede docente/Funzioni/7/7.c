#include<stdio.h>
#include<math.h>

#define N 100

int SubSquare(float v[], int La);

int main(){

  float v[N];

  int La;

  int i;

  int Nsost;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci l'array di lunghezza %d: ", La);

  for(i = 0; i < La; i++){

    scanf("%f", &v[i]);

  }

  Nsost = SubSquare(v, La);

  printf("Il numero di sostituzioni fatte è: %d. \n", Nsost);

  return 0;

}

int SubSquare(float v[], int La){

  int i;

  int Nsost;

  float Iroot;

  Nsost = 0;

  for(i = 0; i < La; i++){

    Iroot = (int) sqrt(v[i]);

    if(v[i] - Iroot * Iroot == 0.0){

      v[i] = sqrt(v[i]);

      Nsost++;

    }
    
  }

  return Nsost;

}
