#include<stdio.h>

int main(){

  int voto, Max, min, S, n;

  printf("Inserisci il voto numero 1: ");
  scanf("%d", &voto);

  if((voto >= 18) && (voto <= 30)){

    Max = voto;

    min = voto;

    S = 0;

    n = 0;

    do{

      S = S + voto;

      n = n + 1;

      if(voto > Max){

	Max = voto;

      }

      if(voto < min){

	min = voto;

      }

      printf("Inserisci il voto numero %d: ", n);

      scanf("%d", &voto);

    }while((voto >= 18) && (voto <= 30));

    printf("Hai inserito %d voti. La media è %f. Il massimo è: %d. Il minimo è: %d.\n", n, (float)S / n, Max, min);

  }
  else{

    printf("Hai inserito subito un valore non accettabile. \n");

  }

  return 0;

}
    

  
