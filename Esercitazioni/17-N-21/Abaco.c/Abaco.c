#include<stdio.h>

void Abaco(int n);

int main(){

  int n;

  printf("Inserisci un numero positivo: ");
  scanf("%d", &n);

  while(n > 0){

    Abaco(n);

    printf("Inserisci un numero positivo: ");
    scanf("%d", &n);

  }

  return 0;

}

void Abaco(int n){

  int i;

  if(n <= 0){

    return;

  }
  else{

    Abaco(n / 10);

    for(i = 0; i < n % 10; i++){

      printf("o");

    }

    printf("\n");

  }

}

