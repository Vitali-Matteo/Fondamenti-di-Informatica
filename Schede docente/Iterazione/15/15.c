#include<stdio.h>

int main(){

  int i, k;

  i = 0;

  k = 0;

  printf("\n \n");

  printf("  ");

  while(k < 61){

    printf("_");

    k++;

  }

  k = 0;

  printf("\n \n");

  printf("  |  X ");

  while(k <= 10){

    printf("| %2d ", k);

    k = k + 1;

  }

  printf("| \n");

  k = 0;

  printf("  ");

  while(k < 61){

    printf("_");

    k++;

  }

  printf("\n \n");

  k = 0;

  while(i <= 10){

    printf("  | %2d ", i);

    k = 0;

    while(k <= 10){

      printf("|%3d ", i * k);

      k++;

    }

    printf("| \n");

    k = 0;

    printf("  ");

    while(k < 61){

      printf("_");

      k++;

    }

    printf("\n \n");

    i++;

  }

  return 0;

}
      

    
