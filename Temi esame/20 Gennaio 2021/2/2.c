#include<stdio.h>
#include<string.h>

#define N 100

void Costruisci(char s[], int k, char sf[], int lungh);

int main(){

  char s[N + 1];

  char sf[N + 1];

  int k;

  printf("Inserisci il valore di k positivo: ");
  scanf("%d", &k);

  printf("Inserisci la stringa su cui lavorare: ");
  scanf(" %[^\n]", s);

  Costruisci(s, k, sf, strlen(s));

  printf("La stringa elaborata è: %s. \n", sf);

  return 0;

}

void Costruisci(char s[], int k, char sf[], int lungh){

  int i;

  for(i = 0; s[i] != '\0' && i < k; i++){

    sf[i] = s[i];

  }

  if(lungh < k){

    for(i = 0; i < k - lungh; i++){

      sf[lungh + i] = s[lungh - 1];

    }

  }

  sf[lungh + i] = '\0';

}
  
