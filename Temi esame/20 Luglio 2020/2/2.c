#include<stdio.h>

int Primo(int n);

int main(){

  FILE *File;

  int n;

  int Ls;

  int Maxs;

  File = fopen("Input.txt", "r");

  Maxs = 0;

  if(File){

    Ls = 0;

    while(fscanf(File, "%d", &n) > 0){

      if(Primo(n) == 1){

	Ls++;

	if(Ls > Maxs){

	  Maxs = Ls;

	}

      }
      else{

	Ls = 0;

      }


    }

    fclose(File);

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  printf("La sequenza più lunga è: %d. \n", Maxs);

  return 0;

}

int Primo(int n){

  int i;

  int Primo;

  Primo = 1;

  i = 2;

  while(i <= n / 2){

    if(n % i == 0){

      Primo = 0;

    }

    i++;

  }

  return Primo;

}
 
