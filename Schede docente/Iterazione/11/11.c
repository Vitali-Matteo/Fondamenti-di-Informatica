#include<stdio.h>

int main(){

  int n, np, crescente;

  printf("Inserisci la successione di numeri nella forma: n m p q... \n");

  scanf("%d", &n);

  if(n == 0){

    printf("Sequenza vuota... \n");

  }
  else{

    crescente = 1;

    /*do{

      np = n;

      scanf("%d", &n);

      if((n < np) && (n != 0)){

	crescente = 0;

      }

    }while((n != 0) && (crescente == 1));

    if(crescente == 1){

      printf("La successione è crescente. \n");

    }
    else{

      printf("La successione non è crescente. \n");

      }*/

    np = n;

    while((n != 0) && (crescente == 1)){

      if(n < np){

	crescente = 1;

      }

      np = n;

      scanf("%d", &n);

    }

    if(crescente == 1){

      printf("La successione è crescente. \n");

    }
    else{

      printf("La successione non è crescente. \n");

    }

  }

  return 0;

}
	
