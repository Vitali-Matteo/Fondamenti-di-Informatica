#include<stdio.h>

int main(){

  int n, np;

  printf("Inserisci la tua sequenza nella forna: n m p q... \n");

  scanf("%d", &n);

  if(n == 0){

    printf("Sequenza vuota...\n");

  }
  else{

    np = n;

    while(n != 0){

      if(n == 2 * np){

	printf("Coppia di valori accettabili: %d %d. \n", np, n);

      }

      np = n;

      scanf("%d", &n);

    }

  }

  return 0;

}
