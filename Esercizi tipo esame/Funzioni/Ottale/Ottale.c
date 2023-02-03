#include<stdio.h>
#include<string.h>

#define N 100

int Converti(char S[]);

int main(){

  char S[N];

  int VD;

  printf("Inserisci la stringa ottale: ");
  scanf("%s", S);

  VD = Converti(S);

  if(VD == -1){

    printf("Errore. Conversione fallita. \n");

  }
  else{

    printf("Il valore della conversione è: %d. \n", VD);

  }

  return 0;

}

int Converti(char S[]){

  int i;

  int VD;

  int b10;

  int Lungh;

  VD = 0;

  b10 = 1;

  Lungh = strlen(S);

  for(i = Lungh - 1; i >= 0 && VD != -1; i--){

    if((S[i] >= '0') && (S[i] <= '8')){

      VD = VD + (int)(S[i] - '0') * b10;

      b10 = b10 * 8;

    }
    else{

      VD = -1;

    }

  }

  return VD;

}
