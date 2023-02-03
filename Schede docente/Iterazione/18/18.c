#include<stdio.h>

int main(){

  int m, n, i, P, inv;

  float R;

  printf("Inserisci m: ");
  scanf("%d", &m);

  do{

    printf("Inserisci n: ");
    scanf("%d", &n);

  }while((m <= 0) && (n == 0));

  i = 0;

  P = 1;

  if(m < 0){

    inv = 1;

    m = (- 1) * m;

  }
  else{

    inv = 0;

  }

  while(m > 0){

    P = P * n;

    m--;

  }

  if(inv == 1){

    R = 1.0f / ((float) P);

  }
  else{

    R = (float) P;

  }

  printf("La potenza richiesta è: %f. \n", R);

  return 0;

}
    
