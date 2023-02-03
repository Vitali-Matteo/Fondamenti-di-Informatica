/* Scrivere un programma che dato un vettore lo stampa stampando una sola volta i duplicati */

#include<stdio.h>

#define L 10

int main(){

  int v[L];

  int i;

  int k;

  int flag;

  for(i = 0; i < L; i++){

    printf("Inserisci il valore alla posizione %d: ", i + 1);
    scanf("%d", &v[i]);

  }

  printf("Stampo l'array senza duplicati: \n");

  for(i = 0; i < L; i++){

    flag = 1;

    for(k = 0; k < i; k++){

      if(v[i] == v[k]){

	flag = 0;

      }

    }

    /*Il programma può essere migliorato nel modo seguente:*/

    flag = 1;

    while((k < i) && (flag == 1)){

      if(v[i] == v[k]){

	  flag = 0;

	}

    }

    /*Oppure*/

    flag = 1;

    for(k = 0; k < i && flag == 1; k++){

      if(v[i] == v[k]){

	flag = !flag;

      }

    }

    if(flag == 1){

      printf("%d ", v[i]);

    }

  }

  printf("\n");

  return 0;

}
