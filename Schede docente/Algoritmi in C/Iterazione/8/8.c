#include<stdio.h>

int main(){

  int a, b, r, P, mcm;

  do{

    printf("Inserisci due numeri a e b, separati da uno spazio: ");
    scanf("%d %d", &a, &b);

  }while((a <= 0) || (b <= 0));

  P = a * b;

  r = a % b;

  while(r > 0){

    a = b;

    b = r;

    r = a % b;

  }

  mcm = P / b;

  printf("Il M.C.D tra i due numeri è: %d. Il m.c.m, invece, è: %d. \n", b, mcm);

  return 0;

}
