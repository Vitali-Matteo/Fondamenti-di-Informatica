#include<stdio.h>

int main(){

  int Max, min, Tot, S, n;

  float Media;

  printf("Inserisci il primo numero: ");
  scanf("%d", &n);

  Max = n;

  min = n;

  Tot = 1;

  S = 0;

  while(n > 0){

    if(n > Max){

      Max = n;

    }
    else{

      if(n < min){

	min = n;

      }
      
    }

    Tot = Tot + 1;

    S = S + n;

    printf("Inserisci il voto numero %d: ", Tot);
    scanf("%d", &n);

  }

  Media = (float)S / Tot;

  printf("Hai inserito %d voti. La media è: %f. Il massimo è: %d. Il minimo è: %d. \n", Tot, Media, Max, min);

  return 0;

}
