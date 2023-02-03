#include<stdio.h>

void Hanoi(int src, int dst, int tmp, int n);

int main(){

  int n;

  do{

    printf("Inserisci il numero di dischi: ");
    scanf("%d", &n);

  }while(n < 1);

  Hanoi(1, 3, 2, n);

  return 0;

}

void Hanoi(int src, int dst, int tmp, int n){

  if(n == 1){

    printf("Sposta un disco dal perno %d al perno %d. \n", src, dst);

  }
  else{

    Hanoi(src, tmp, dst, n - 1);

    printf("Sposta un disco dal perno %d al perno %d. \n", src, dst);

    Hanoi(tmp, dst, src, n - 1); /* Vi sono due chiamate quindi il numero di chaiamate è maggiore e esponenziale*/

  }

}
