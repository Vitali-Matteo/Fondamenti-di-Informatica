#include<stdio.h>


int main(){

  int Voto, NV, MAX, min;
  int S;

  S = 0;
  NV = 0;

  do{
    
    printf("Inserisci il primo voto: ");
    scanf("%d", &Voto);

  }while(Voto < 0 || Voto > 30);

  MAX = Voto;
  min = Voto;

  while(Voto != 0){

    S = S + Voto;
    NV = NV + 1;

    if(Voto > MAX){

      MAX = Voto;

    }
    else{

      if(Voto < min){

	min = Voto;

      }

    }

    do{

      printf("Inserisci il voto successivo: ");
      scanf("%d",&Voto);

    }while(Voto < 0 || Voto > 30);

  }

  if(NV == 0){

    printf("Errore di inserimento voti.\n");

  }
  else{

    printf("La media tra gli %d voti inseriti è: %.3f.\n", NV, (float)S/NV);
    printf("Il voto minimo è: %d. \n", min);
    printf("Il voto massimo è: %d. \n", MAX);

  }

  return 0;

}

    
	

  
