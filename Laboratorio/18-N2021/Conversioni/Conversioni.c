#include<stdio.h>
#include<string.h>

#define N 20

int Converti(char C[], int Lungh);

int main(){

  char C[N + 1];

  int Conv;

  printf("Inserisci la stringa da convertire: ");
  scanf("%s", C);

  Conv = Converti(C, strlen(C));

  printf("Risultato: %d. \n", Conv);

  return 0;

}

int Converti(char C[], int Lungh){

  int i;

  int Conv;

  Conv = 0;

  for(i = 0; i < Lungh && Conv != -1; i++){

    if((('0' <= C[i]) && (C[i] <= '9'))){

      Conv = 10 * Conv + (int) (C[i] - '0');

    }
    else{

      Conv = -1;

    }

  }

  return Conv;

}

    
