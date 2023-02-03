#include<stdio.h>

#define L1 10

#define L2 5

int main(){

  int A[L1], B[L2];

  int i, k, flag;

  for(i = 0; i < L1; i++){

    printf("Inserisci l'elemento %d dell'array: ", i + 1);
    scanf("%d", &A[i]);

  }

  for(k = 0; k < L2; k++){

    printf("Inserisci l'elemento %d dell'array: ", k + 1);
    scanf("%d", &B[k]);

  }

  flag = 0;

  for(i = 0; i < L1 - (L2 - 1) && !flag; i++){

    flag = 1;

    for(k = 0; k < L2 && flag; k++){

      if(A[i + k] != B[k]){

	flag = 0;

      }

    }

  }

  if(flag == 1){

    printf("Nei due array vi è una sequenza contigua. \n");

  }
  else{

    printf("Nei due array non vi è una sequenza contigua. \n");

  }

  return 0;

}
