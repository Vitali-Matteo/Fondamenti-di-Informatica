#include<stdio.h>

int main(){

  int p, Pt;

  float M;

  Pt = 0;

  printf("Inserisci il punteggio del primo esercizio: ");

  scanf("%d", &p);

  Pt = Pt + p;

  printf("Inserisci il punteggio del secondo esercizio: ");
  scanf("%d", &p);

  Pt = Pt + p;

  printf("Inserisci il punteggio del terzo esercizio: ");
  scanf("%d", &p);

  Pt = Pt + p;

  M = (float)Pt / 3.0f;

  printf("La somma dei punteggi è: %d; mentre la media è: %f.", Pt, M);

  if(Pt >= 18){

    printf("Esame superato. \n");

  }
  else{

    printf("Esame non superato. \n");

  }

  return 0;

}
  

  
