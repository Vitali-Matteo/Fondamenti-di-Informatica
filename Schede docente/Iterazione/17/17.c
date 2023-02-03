#include<stdio.h>

int main(){

  int K, n, S;

  do{

    printf("Inserisci un numero positivo limite: ");
    scanf("%d", &K);

  }while(K < 0);

  n = 1;

  S = 0;

  do{

    printf("Un numero triangolare minore di %d è: %d. \n", K, S);

    S = S + n;

    n = n + 1;

  }while(S <= K);

  return 0;

}
