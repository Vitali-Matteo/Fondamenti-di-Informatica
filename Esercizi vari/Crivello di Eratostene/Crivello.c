#include<stdio.h>

#define LIM 10000

int main(){

  int num[LIM];

  int i, k;

  int lim;

  do{

     printf("Inserisci un valore limite tra 1 e %d: ", LIM);
     scanf("%d", &lim);

  }while((lim < 1) || (lim > LIM));

  for(i = 0; i < LIM; i++){

    if(i < lim){

      num[i] = i + 1;

    }
    else{

      num[i] = 0;

    }

  }

  for(i = 2; i < lim / 2; i++){

    for(k = i; k < lim; k++){

      if(num[k] % i == 0){

	num[k] = 0;

      }

    }

  }

  printf("Stampo la lista di numeri primi: \n");

  for(i = 0; i < LIM; i++){

    if(num[i] != 0){

      printf("Numero primo: %d.\n", num[i]);

    }

  }

  return 0;

}

      

     
