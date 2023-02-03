#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

  int nt;

  int S;

  float Media;

  char c;

  nt = 0;

  S = 0;

  do{

    printf("Inserisci un carattere: ");
    scanf(" %c", &c);

    if(isdigit(c)){

      S = S + (c -'0');

      nt++;

    }

  }while(c != '#');

  if(nt == 0){

    printf("Errore. Hai inserito 0 valori accettabili. \n");

  }
  else{

    Media = (float) S / nt;

    printf("Hai inserito %d valori accettabili. La media è: %f. \n", nt, Media);

  }

  return 0;

}
