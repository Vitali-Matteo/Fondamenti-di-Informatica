#include<stdio.h>

int main(){

  char c;

  printf("Inserisci un carattere: ");
  scanf("%c", &c);

  if(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))){

    if((c >= 'a') && (c <= 'z')){

      c = c - 32;

      printf("Il carattere %c minisculo è: %c. \n", c + 32, c);

    }
    else{

      c = c + 32;

      printf("Il carattere %c maiuscolo è: %c. \n", c - 32, c);

    }

  }
  else{

    printf("Carattere inserito non valido. \n");

  }

  return 0;

}
