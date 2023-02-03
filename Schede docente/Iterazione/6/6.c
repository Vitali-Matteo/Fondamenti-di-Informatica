#include<stdio.h>

int main(){

  int n, i, primo;

  printf("Inserisci un numero maggiore di 0: ");
  scanf("%d", &n);

  while(n <= 0){

    printf("Hai inserito il numero %d che è scorretto. Riprova: ", n);
    scanf("%d", &n);

  }

  i = 2;

  primo = 1;

  while((i < n) && (primo == 1)){

    if(n % i == 0){

      primo = 0;

    }

    i = i + 1;

  }

  printf("Il numero %d è ", n);

  if(primo == 1){

    printf("primo. \n");

  }
  else{

    printf("non primo. \n");

  }

  return 0;

}
