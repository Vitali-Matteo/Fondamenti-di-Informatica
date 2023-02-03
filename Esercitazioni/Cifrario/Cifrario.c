#include<stdio.h>

#define N 100

void Cifra(char C[], int k);

void Decifra(char C[], int k);

void Cifra_punt(char *p, int k);

int main(){

  char C[N];

  int k;

  do{

    printf("Inserisci la chiave di cifratura: ");
    scanf("%d", &k);

  }while(k < 0);

  printf("Inserisci la frase da cifrare: ");
  scanf(" %[^\n]", C);

  Cifra(C, k);

  /* Cifra_punt(&C[0], k); */

  printf("La stringa cifrata è: %s. \n", C);

  Decifra(C, k);

  printf("La stringa decifrata è: %s.\n", C);

  return 0;

}

void Cifra(char C[], int k){

  int i;

  for(i = 0; C[i] != '\0'; i++){

    C[i] = ((C[i] - 'a' ) + k) % 26 + 'a';

  }

}

void Decifra(char C[], int k){

  int i;

  for(i = 0; C[i] != '\0'; i++){

    C[i] = (26 + C[i] - 'a' - k) % 26 + 'a';

  }

}

void Cifra_punt(char* c, int k){

  int i;

  for(i = 0; *(c + i) != '\0'; i++){

    *(c + i) = (*(c + i) - 'a' + k) % 26 + 'a';

  }

}
  
