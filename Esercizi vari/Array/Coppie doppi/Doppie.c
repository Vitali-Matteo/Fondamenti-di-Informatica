#include<stdio.h>

#define L 100

int main(){

  int num[L];

  int i, k;

  printf("Inserisci la sequenza di numeri: \n");

  for(i = 0; i < L; i++){

    scanf("%d", &num[i]);

  }

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      if(num[i] == 2 * num[k]){

	printf("%d %d / ", num[i], num[k]);


      }

    }

  }

  printf("\n");

  return 0;

}
