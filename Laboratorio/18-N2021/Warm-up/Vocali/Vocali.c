#include<stdio.h>

#define N 100

int Vocali(char S[]);

int main(){

  char S[N + 1];

  int Nv;

  printf("Inserisci la stringa: ");
  scanf(" %[^\n]", S);

  Nv = Vocali(S);

  printf("Il numero di vocali in %s è: %d. \n", S, Nv);

  return 0;

}

int Vocali(char S[]){

  int i;

  char c;

  int Nv;

  Nv = 0;

  for(i = 0; S[i] != '\0'; i++){

    if(((('a' <= S[i]) && (S[i] <= 'z')) || (('A' <= S[i])) && (S[i] <= 'Z'))){

      c = tolower(S[i]);

      if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')){

	Nv++;

      }

    }

  }

  return Nv;

}

    
