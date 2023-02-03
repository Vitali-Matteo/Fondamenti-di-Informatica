#include<stdio.h>

int CMCD(int a, int b);

int Cmcm(int a, int b);

int main(){

  int n, m, p;

  int MCD, mcm;

  do{

    printf("Inserisci il primo numero: ");
    scanf("%d", &n);

  }while(n < 0);

  do{

    printf("Inserisci il secondo numero: ");
    scanf("%d", &m);

  }while(m < 0);

  do{

    printf("Inserisci il terzo numero: ");
    scanf("%d", &p);

  }while(p < 0);

  MCD = CMCD(n, CMCD(m, p));

  mcm = Cmcm(n, Cmcm(m, p));

  printf("Il MCD tra %d, %d e %d è: %d. \n", m, n, p, MCD);

  printf("Il mcm tra %d, %d e %d è: %d. \n", m, n, p,  mcm);

  return 0;

}

int CMCD(int a, int b){

  int r;

  r = a % b;

  while(r != 0){

    a = b;

    b = r;

    r = a % b;

  }

  return b;

}

int Cmcm(int a, int b){

  return a * b / CMCD(a, b);

}
