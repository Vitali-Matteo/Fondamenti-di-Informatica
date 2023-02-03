#include<stdio.h>

int main(){

  int a, b, r, ca, cb, cca, Sa, Sb, flag;

  int nca, ncb;

  do{

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

  }while(a <= 0);

  do{

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

  }while(b <= 0);

  ca = a;
  cb = b;

  nca = 0;
  ncb = 0;

  while(a > 0){

    a = a / 10;

    nca++;

  }

  while(b > 0){

    b = b / 10;

    ncb++;

  }

  a = ca;
  b = cb;

  cca = a;

  flag = 1;

  while((nca > 0) && flag){

    r = cca % 10;

    Sa = 0;

    while(a > 0){

      if(a % 10 == r){

	Sa++;

      }

      a = a / 10;

    }

    a = ca;

    Sb = 0;

    while(b > 0){

      if(b % 10 == r){

	Sb++;

      }

      b = b / 10;

    }

    b = cb;

    if(Sa != Sb){

      flag = 0;

    }

    cca = cca / 10;

    nca--;

  }

  if(flag == 1){

    printf("I due numeri %d e %d sono anagrammi.\n", ca, cb);

  }
  else{

    printf("I due numeri %d e %d non sono anagrammi. \n", ca, cb);

  }

  return 0;

}
