#include<stdio.h>

int isArmstrong(int n);

int Power(int a, int b);

int Length(int n);

int main(){

  int n;

  do{

    printf("Inserisci un numero naturale: ");
    scanf("%d", &n);

  }while(n < 0);

  if(isArmstrong(n) == 1){

    printf("Il numero %d è di Armstrong. \n", n);

  }
  else{

    printf("Il numero %d non è di Armstrong.\n", n);

  }

  return 0;

}

int Length(int n){

  int L;

  L = 0;

  while(n > L){

    L++;

    n = n / 10;

  }

  return L;

}

int Power(int a, int b){

  int R;

  R = 1;

  while(b > 0){

    R = R * a;

    b--;

  }

  return R;

}

int isArmstrong(int n){

  int S;

  int exp;

  int cpn;

  cpn = n;

  S = 0;

  exp = 1;

  while(S < n){

    S = 0;

    while(n > 0){

      S = S + Power(n % 10, exp);

      n = n / 10;

    }

    n = cpn;

    exp++;

  }

  if(S == cpn){

    return 1;

  }
  else{

    return 0;

  }

}

  
