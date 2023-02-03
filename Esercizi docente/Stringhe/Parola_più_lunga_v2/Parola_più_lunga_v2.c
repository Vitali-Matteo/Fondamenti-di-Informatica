#include<stdio.h>
#include<string.h>

#define L 300

int main(){

  char s[L + 1];

  int i, S, l, Max;

  printf("Inserisci la frase da anlizzare: ");
  scanf(" %[^\n]", s);

  S = 0;

  Max = 0;

  l = strlen(s);

  for(i = 0; i < l + 1; i++){

    if((s[i] == ' ') || (s[i] == '\0')){

      if(S > Max){

		Max = S;

      }

      S = 0;

    }
    else{

      S = S + 1;

    }

  }

  printf("La lunghezza della parola più lunga è: %d. \n", Max);

  return 0;

}
