#include<stdio.h>
#include<string.h>

#define N 30

int Lunghezza(char* S, int* Lungh);

void Lunghezza_void(char* S, int* Lungh);

int main(){

  char S[N];

  int Lungh;

  printf("Inserisci la parola di massimo %d caratteri: ", N);
  scanf(" %[^\n]", S);

  Lungh = 0;

  Lunghezza(&S[0], &Lungh);

  printf("La lunghezza della parola è: %d. ", Lungh);

  Lungh = 0;

  Lunghezza_void(&S[0], &Lungh);

  printf("Seconda lunghezza: %d. \n", Lungh);

  return 0;

}

int Lunghezza(char* S, int* Lungh){

  if(*S == '\0'){

    return *Lungh;

  }
  else{

    *Lungh = *Lungh + 1;

    return Lunghezza(S + 1, Lungh);

  }

}

void Lunghezza_void(char* S, int* Lungh){

  if(*S != '\0'){

    *Lungh = *Lungh + 1;

    Lunghezza_void(S + 1, Lungh);

  }

}
