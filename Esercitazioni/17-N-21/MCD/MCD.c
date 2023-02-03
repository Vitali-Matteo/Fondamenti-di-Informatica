#include<stdio.h>

int MCD(int a, int b);

int main(){

  int a, b;

  int Mcd;

  printf("Inserisci un numero intero: ");
  scanf("%d", &a);

  printf("Inserisci un altro numero intero: ");
  scanf("%d", &b);

  Mcd = MCD(a, b);

  printf("Il MCD tra %d e %d è: %d. \n", a, b, Mcd);

  return 0;
  
}

int MCD(int a, int b){

  if(b == 0){

    return a;

  }
  else{

    return MCD(b, a % b);

  }

}
