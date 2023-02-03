#include<stdio.h>
#include<string.h>

#define N 100
#define M 30

typedef struct{

  unsigned int ore;

  unsigned int min;

  unsigned int sec;

}Durata_t;

typedef struct{

  char Titolo[M + 1];

  char Autore[M + 1];

  unsigned int Anno; /*Tipo di dato intero che rappresenta sempre numeri positivi*/

  unsigned int Ntracce;

  Durata_t Durata;

  float Prezzo;

  unsigned int Ncopie;

}CD_t;

int main(){

  CD_t CD[N];

  int i;

  int Ni;

  int I_Max;

  do{

    printf("Inserisci il numero di elementi massimi nell'array: ");
    scanf("%d", &Ni);

  }while((Ni < 0) || (Ni > N));

  for(i = 0; i < Ni; i++){

    printf("Inserisci il titolo del CD: ");
    scanf(" %[^\n]", CD[i].Titolo);

    printf("Inserisci l'autore del CD \" %s \": ", CD[i].Titolo);
    scanf(" %[^\n]", CD[i].Autore); /*Il ^ indica la negazione, quindi dice al programma di non prendere tutti i caratteri dopo il \n*/

    printf("Inserisci l'anno di pubblicazione del CD \" %s \": ", CD[i].Titolo);
    scanf("%u", &CD[i].Anno);

    printf("Inserisci il numero di tracce del CD \" %s \": ", CD[i].Titolo);
    scanf("%u", &CD[i].Ntracce);

    printf("Inserisci la durata in termini di numero ore, minuti e secondi: ");
    scanf("%u, %u, %u", &CD[i].Durata.ore, &CD[i].Durata.min, &CD[i].Durata.sec);

    printf("Inserisci il prezzo del CD: ");
    scanf("%f", &CD[i].Prezzo);

    printf("Inserisci il numero di copie vendute: ");
    scanf("%u", &CD[i].Ncopie);

  }

  I_Max = 0; /*Indice del massimo*/

  for(i = 0; i < Ni; i++){

    if(3600 * CD[i].Durata.ore + 60 * CD[i].Durata.min + CD[i].Durata.sec > 3600 * CD[I_Max].Durata.ore + 60 * CD[I_Max].Durata.min + CD[I_Max].Durata.sec){

      I_Max = i;

    }

  }

  printf("Il CD con durata massima è dell'autore %s. Ha titolo: \" %s \". \n", CD[I_Max].Autore, CD[i].Titolo);

  return 0;

}

  
	  
  

  
