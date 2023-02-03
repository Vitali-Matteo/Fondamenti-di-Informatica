#include<stdio.h>
#include<string.h>

#define L 30

int main(){

  char A[L + 1], B[L + 1];

  int i, k;

  int flag;

  printf("Inserisci prima parola: ");
  scanf("%s", A);

  printf("Inserisci seconda parola: ");
  scanf("%s", B);

  flag = 0;

  if(strlen(A) >=  strlen(B)){ 

    for(i = 0; A[i] != '\0' && !flag; i++){

      flag = 1;

      for(k = 0; B[k] != '\0' && A[i + k] != '\0' && flag; k++){

	if(A[i + k] != B[k]){

	  flag = 0;

	}

      }

    }

  }

  if(flag == 1){

    printf("La parola %s è sottostringa di %s. \n", B, A);

  }
  else{

    printf("La parola %s non è sottostringa di %s. \n", B, A);

  }

  return 0;

}

      
