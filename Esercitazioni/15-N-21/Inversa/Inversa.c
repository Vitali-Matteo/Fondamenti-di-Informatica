#include<stdio.h>
#include<string.h>

#define N 100

void Inversa(char S[], int La, int i);

void Stampa_Inv(char* S);

int main(){

  char S[N + 1];

  printf("Inserisci la stringa che devon invertire: ");
  scanf(" %[^\n]", S);

  Inversa(S, strlen(S), 0);

  printf("La parola invertita è: %s. \n", S);

  printf("L'inversa dell'inversa è: \n");

  Stampa_Inv(&S[strlen(S) - 1]);

  return 0;

}

void Inversa(char S[], int La, int i){

  char Temp;

  if(i <= La / 2){

    Temp = S[i];

    S[i] = S[La - i - 1];

    S[La - i - 1] = Temp;

    Inversa(S, La, i + 1);

  }

}

void Stampa_Inv(char *S){

  if(*S != '\0'){

    printf(*S);

    S - 1;

  }

}
  
  
    
