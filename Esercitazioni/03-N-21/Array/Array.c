#include<stdio.h>

#define N 100

#define S 17

int Analizza(int v[], int Pf, int Somma, int *qmax, int *max){

  int i, k;

  int Trovato;

  Trovato = 0;

  for(i = 0; i < Pf && !Trovato; i++){

    for(k = i + 1; k < Pf && !Trovato; k++){

      if(v[i] + v[k] == Somma){

	Trovato = 1;

      }

    }

  }

  *max = v[0];

  *qmax = 0;

  for(i = 0; i < Pf; i++){

    if(v[i] > *max){

      *max = v[i];

    }

    if((v[i] < *max) && (v[i] > *qmax)){

      *qmax = v[i];

    }

  }

  return Trovato;

}

int main(){

  int v[N];

  int i;

  int len;

  int qmax, max;

  int Trovato;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &len);

  }while((len < 0) || (len > N));

  printf("Inserisci gli lementi dell'array. \n");

  for(i = 0; i < len; i++){

    printf("Inserisci elemento %d dell'array: ", i + 1);
    scanf("%d", &v[i]);

  }

  Trovato = Analizza(v, len, S, &qmax, &max);

  printf("Trovato: %d. Massimo: %d. Quasi massimo: %d. \n", Trovato, max, qmax);

  return 0;

}

  

  
