#include<stdio.h>

int main(){

  int n, i, flag;

  do{

    printf("Inserisci un numero maggiore di 1: ");
    scanf("%d", &n);

  }while(n <= 1);

  flag = 1;

  for(i = 2; i < n / 2 + 1 && flag; i++){

    if(n % i == 0){

      flag = 0;

    }

  }

  if(flag == 0){

    printf("Il numero %d non è primo. \n", n);

  }
  else{

    printf("Il numero %d è primo. \n", n);

  }


  return 0;

}
