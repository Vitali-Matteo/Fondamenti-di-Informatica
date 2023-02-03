#include<stdio.h>
#include<string.h>

#define N 100

char Cifra(char c, int Offset);

int main(){

  char Frase[N + 1];

  int i, k;

  int Offset;

  char Cifrata[N + 1];

  printf("Inserisci una parola di massimo %d caratteri: \n", N);
  scanf(" %[^\n]", Frase);

  do{

    printf("Inserisci l'offset: ");
    scanf("%d", &Offset);

  }while(Offset < 0);

  Offset = Offset % 26;

  for(i = 0; Frase[i] != '\0'; i++){

    Cifrata[i] = Cifra(Frase[i], Offset);

  }

  printf("La frase \" %s \" cifrata diventa: %s. \n", Frase, Cifrata);

  return 0;

}

char Cifra(char c, int Offset){

  if((c >= 'a') && (c <= 'z')){

    if((c >= 'A') && (c <= 'Z')){

      c = (c + Offset) % 'Z' + 'A' * (c + Offset >= 'Z');

    }
    else{

      c = (c + Offset) % 'z' + 'a' * (c + Offset >= 'z');

    }

    return c;

  }
  else{

    return c;

  }

}
