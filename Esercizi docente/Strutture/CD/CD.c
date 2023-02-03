#include<stdio.h>
#include<string.h>


#define N 100
#define NS 30


typedef struct{

  int Ore;

  int Minuti;

  int Secondi;

}Durata_t;

typedef struct{

  char Titolo[NS + 1];

  char Autore[NS + 1];

  int Anno;

  int NTracce;

  Durata_t Durata;

  float Prezzo;

  int Dmax;

}CD_t;


int main(){

  CD_t CD[N];

  int i, k;

  CD_t MAX;

  int Ne;

  int DMax, NPMax;

  char Autore[NS + 1];
  

  do{

    printf("Inserisci il numero di elementi che vuoi avere nell'array di CD: ");
    scanf("%d", &Ne);

  }while((Ne < 0) || (Ne > N));

  for(i = 0; i < Ne; i++){

    printf("Inserisci autore: ");
    scanf(" %[^\n]", CD[i].Autore);

    printf("Inserisci titolo: ");
    scanf(" %[^\n]", CD[i].Titolo);

    printf("Inserisci l'anno di uscita: ");
    scanf("%d", &CD[i].Anno);

    printf("Inserisci il numero di tracce: ");
    scanf("%d", &CD[i].NTracce);

    printf("Inserisci la durata in termini di ore, minuti, secondi: ");
    scanf("%d, %d, %d", &CD[i].Durata.Ore, &CD[i].Durata.Min, &CD[i].Durata.Ore);

    printf("Inserisci prezzo: ");
    scanf("%d", &CD[i].Prezzo);

    Cd[i].Dmax = 0;

  }

  MAX = CD[0];

  for(i = 0; i < Ne; i++){

    if(DCompare(CD[i], MAX) == 1){

      MAX = CD[i];

    }

  }

  for(i = 0; i < Ne; i++){

    if(

  printf("Il CD con durata massima è caraterizzato da: \n-Titolo: %s. \n-

    
  

