#include<stdio.h>
#include<string.h>

#define L 300

int main(){

  char s[L + 1];

  int Max, S, i, k, l;

  printf("Inserisci la frase che devo analizzare: ");

  scanf(" %[^\n]", s);

  l = strlen(s);

  /* printf("%d", l);*/

  S = 0;

  Max = 0;

  for(i = 0; i < l; i = i + S){

    S = 0;

    for(k = 0; s[i + k] != ' ' && (i + k) < l; k++){

      S++;

    }

    /* k = 0;

    while((s[i + k] != ' ') && (i + k < l)){

      S = S + 1;

      k = k + 1;

    }*/

    if(S > Max){

      Max = S;

    }

    S = S + 1;

  }

  printf("La parola più lunga nella stringa ha %d caratteri. \n", Max);

  return 0;

}
