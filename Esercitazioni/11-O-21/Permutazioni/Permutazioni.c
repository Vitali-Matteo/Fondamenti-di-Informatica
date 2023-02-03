/*Scivere un programma che verifica che due sequenza di numeri interi sono una la permutazione dell'altra.*/

/*L'idea è quella di contare ogni valore all'interno della sequenza*/

#include<stdio.h>

#define L 5

int main(){

  int a[L], b[L], S, i, k, flag;

  for(i = 0; i < L; i++){

    printf("Inserisci il valore di posizione %d: ", i + 1);
    scanf("%d", &a[i]);

  }

  for(i = 0; i < L; i++){

    printf("Inserisci il valore di posizione %d: ", i + 1);
    scanf("%d", &b[i]);

  }

  S = 0;

  flag = 1;

  for(i = 0; i < L && flag == 1; i++){

    S = 0;

    for(k = 0; k < L; k++){

      if(a[i] == a[k]){

	S = S + 1;

      }

    }

    for(k = 0; k < L; k++){

      if(a[i] == b[k]){

	S = S - 1;

      }

    }

    if(S != 0){

      flag = 0;

    }

  }

  if(flag == 1){

    printf("Sequenze permutate. \n");

  }
  else{

    printf("Sequenza non permutate. \n");

  }

  return 0;

}
