#include<stdio.h>

#define N 100

int Baricentro(int v[], int La);

int main(){

  int v[N];

  int i;

  int La;

  int Bar;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci gli elementi dell'array: \n");

  for(i = 0; i < La; i++){

    scanf("%d", &v[i]);

  }

  Bar = Baricentro(v, La);

  if(Bar != -1){

    printf("Il baricentro dell'array è: %d.\n", Bar);

  }
  else{

    printf("Baricentro non trovato.\n");

  }

  return 0;

}

int Baricentro(int v[], int La){

  int i, k;

  int S;

  int Trovato;

  S = 0;

  Trovato = -1;

  for(i = 1; i < La - 1 && Trovato == -1; i++){

    S = 0;

    for(k = 0; k <= i; k++){

      S = S + v[k];

    }

    for(k = La - 1; k > i; k--){

      S = S - v[k];

    }

    if(S == 0){

      Trovato = i;

    }

  }

  return Trovato;

}
