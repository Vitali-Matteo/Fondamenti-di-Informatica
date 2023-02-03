#include<stdio.h>
#include<math.h>

#define N 100

float MediaArr(float v[], int La);

int Find(float v[], int La);

float Abs(float a);

int main(){

  float v[N];

  int i;

  int Ivm;

  int La;

  do{

    printf("Inserisci il numero di elementi dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci gli elementi dell'arry: \n");

  for(i = 0; i < La; i++){

    scanf("%f", &v[i]);

  }

  Ivm = Find(v, La);

  printf("L'indice del valore più vicino è: %d.\n", Ivm);

  return 0;

}

float Abs(float a){

  if(a < 0){

    return (- 1) * a;

  }
  else{

    return a;

  }

}

float Media(float v[], int La){

  int i;

  float S;

  S = 0.0f;

  for(i = 0; i < La; i++){

    S = S + v[i];

  }

  return S / La;

}

int Find(float v[], int La){

  int i;

  int Ind;

  float Med;

  float Mindist;

  Med = Media(v, La);

  Mindist = Abs(v[0] - Med);

  Ind = 0;

  for(i = 1; i < La; i++){

    if(Abs(v[i] - Med) < Mindist){

      Mindist = Abs(v[i] - Med);

      Ind = i;

    }

  }

  return Ind;

}
