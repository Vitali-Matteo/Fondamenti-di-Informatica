#include<stdio.h>
#include<string.h>

#define N 12

int main(){

  char num[N + 1];

  int n;

  int i, k;

  int flag;

  int S;

  do{

    printf("Inserisci un numero positivo: ");
    scanf("%d", &n);

  }while(n < 0);

  for(i = 0; i < N; i++){

    num[i] = '0';

  }

  i = 0;

  while(n > 0){

    num[i] = n % 10;

    n = n / 10;

    i++;

  }

  num[i] = '\0';

  flag = 1;

  for(i = 0; num[i] != '\0' && flag; i++){

    S = 0;

    for(k = 0; num[k] != '\0' && flag; k++){

      if(num[i] == num[k]){

	S++;

      }

    }

    if(S > 1){

      flag = 0;

    }

  }

  if(flag == 0){

    printf("Il numero %s è ripetitivo. \n", num);

  }
  else{

    printf("Il numero %s è vario. \n", num);

  }

  return 0;

}

    

    
