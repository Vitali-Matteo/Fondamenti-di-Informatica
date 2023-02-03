#include<stdio.h>

#define N 10

int Perfetto(int n);

int main(){

  int Max;

  int i;

  int Num[N];

  for(i = 0; i < N; i++){

    do{

      printf("Inserisci un numero naturale: ");
      scanf("%d", &Num[i]);

    }while(Num[i] < 0);

  }

  Max = 0;

  for(i = 0; i < N; i++){

    if((Perfetto(Num[i]) == 1) && (Perfetto(Num[i]) > Max)){

      Max = Num[i];

    }

  }

  if(Max != 0){

    printf("Il massimo numero perfetto è: %d.\n", Max);

  }
  else{

    printf("Non vi sono numeri perfetti. \n");

  }

  return 0;

}

int Perfetto(int n){

  int S;

  int i;

  S = 0;

  for(i = 1; i <= n / 2 && S < n; i++){
    
    if(n % i == 0){

      S = S + i;

    }

    /*Oppure S = S + (n % i == 0) * i*/

  }

  return (S == n);

}
