#include<stdio.h>

int main(){

  int n, i;

  int flag;

  printf("Insserisci un numero positivo: ");
  scanf("%d", &n);

  if(n == 1){

    printf("Il numero 1 non è né primo né non primo. \n");

  }
  else{

    flag = 1;

    i = 2;

    do{

      if(n % i == 0){

	flag = 0;

      }

      i = i + 1;

    }while((i < n) && (flag == 1));

    if(flag == 1){

      printf("Il numero %d è primo. \n", n);

    }
    else{

      printf("Il numero %d non è primo. \n", n);

    }

    i = 2;
    flag = 1;

    while((i < n) && (flag == 1)){

      if(n % i == 0){

	flag = 0;

      }

      i = i + 1;

    }

    if(flag == 1){

      printf("Il numero %d è primo. \n", n);

    }
    else{

      printf("Il numero %d non è primo. \n", n);

    }

  }

  return 0;

}
    
