#include<stdio.h>
#include<string.h>

#define L1 300
#define L2 300

int main(){

  char A[L1], B[L2];

  int i, k, flag, S, Max, len1, len2;

  printf("Inserisci la prima parola: ");
  scanf(" %[^\n]", A);

  printf("Inserisci la seconda parola: ");
  scanf(" %[^\n]", B);

  flag = 0;

  Max = 0;

  for(i = 0; A[i] != '\0' ; i++){

    flag = 1;

    S = 0;

    for(k = 0; B[k] != '\0' && flag; k++){

      if(A[i + k] != B[k]){

	flag = 0;

      }
      else{

	S = S + 1;

      }

    }

    if(S > Max){

      Max = S;

    }

  }

  printf("La lunghezza massima del suffisso è: %d. \n", Max);

  return 0;

}
