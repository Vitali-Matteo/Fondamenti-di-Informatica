#include<stdio.h>

int main(){

  int n, q, r, flag;

  printf("Inserisci il numero da controllare: ");
  scanf("%d", &n);

  q = n;

  flag = 1;

  do{

    r = q % 10;

    q = q / 10;

    if(r % 2 == 1){

      flag = 0;

    }

  }while((q > 0) && (flag == 1));

  if(flag == 1){

    printf("Numero formato da sole cifre pari. \n");

  }
  else{

    printf("Numero formato da almeno una cifra dispari. \n");

  }

  return 0;

}
