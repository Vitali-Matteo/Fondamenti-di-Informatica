#include<stdio.h>

int main(){

  char c;

  int Shift;

  printf("Inserisci lo shist che vuoi effettuare: ");
  scanf("%d", &Shift);

  printf("Inserisci la seuqneza di caratteri del tipo: ... INVIO ... INVIO. \n");
  scanf(" %c", &c);

  if((c >= 97) && (c <= 122)){
    
    while((c >= 97) && (c <= 122)){

      if(c + (Shift % 26) > 122){

	c = 97 + (c + (Shift % 26)) % 123;

      }
      else{

	c = c + (Shift % 26);

      }

      printf("Il carattere shiftato è: %c. \n", c);

      printf("Inserisci un nuovo carattere: ");
      scanf(" %c", &c);

    }

  }
  else{

    printf("Sequenza vuota. \n");

  }

  return 0;

}

    
