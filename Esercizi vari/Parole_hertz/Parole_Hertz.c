#include<stdio.h>

#define L1 5
#define L2 5

int main(){

  char A[L1 + 1], B[L2 + 1];

  int i, k, flag;

  printf("Inserisci la prima parola: ");
  scanf(" %[^\n]", A);

  printf("Inserisci la seconda parola: ");
  scanf(" %[^\n]", B);

  if(L1 == L2){

    flag = 1;

    for(k = 1; k < L2; k = k + 2){

      if((A[k] != B[k]) && (A[k - 1] != B[k - 1])){

	flag = 0;

      }

    }

    if(flag == 1){

      printf("Le due parole %s e %s sono Hertziane. \n", A, B);

    }
    else{

      printf("Le parole %s e %s non sono Hertziane.\n", A, B);

    }

  }
  else{

    printf("le due parole non sono comparabili. \n");

  }

  return 0;

}


      
