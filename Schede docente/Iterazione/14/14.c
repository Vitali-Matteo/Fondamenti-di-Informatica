#include<stdio.h>

int main(){

  int a, b, i, k;

  i = 0;

  k = 0;

  do{

    printf("Inserisci la misura della base del rettangolo: ");
    scanf("%d", &a);

  }while(a <= 0);

  do{

    printf("Inserisci la misura dell'altezza del rettangolo: ");
    scanf("%d", &b);

  }while(b <= 0);

  while(i < a){

    printf("* ");

    i++;

  }

  printf("\n");

  i = 0;

  while(k < b){

    printf("*");

    i = 0;

    while(i < 2 * a - 3){

      printf(" ");

      ++i;

    }

    printf("*");

    printf("\n");

    k = k + 1;

  }

  i = 0;

  while(i < a){

    printf("* ");

    i = i + 1;

  }

  printf("\n");

  return 0;

}
