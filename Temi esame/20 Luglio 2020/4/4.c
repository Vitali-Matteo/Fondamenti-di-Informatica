#include<stdio.h>
#include<string.h>

#define Lt 50
#define La 50

#define Nscul 100

#define Neg 100
#define Larr 10000

typedef struct{

  unsigned int Id;

  char Titolo[Lt];

  char Autore[La];

  unsigned int Prezzo;

}scultura_t;

typedef struct{

  int nsc;

  scultura_t scul[Nscul];

}negozio_t;

void Costruisci(negozio_t* Ng, int P, scultura_t* Sc, int Ne);

int main(){

  negozio_t Negozi[Neg];

  scultura_t Scultura[Larr];

  int P;

  int Ne;

  int i, k;

  do{

    printf("Inserisci il numero di negozi: ");
    scanf("%d", &Ne);

  }while((Ne < 0) || (Ne > Neg));

  do{

    printf("Inserisci il prezzo da confrontare: ");
    scanf("%d", &P);

  }while(P <= 0);

  for(i = 0; i < Ne; i++){

    printf("Inserisci il numero di sculture del negozio %d: ", i + 1);
    scanf("%d", &Negozi[i].nsc);

    for(k = 0; k < Negozi[i].nsc; k++){

      printf("Id della scultura: ");
      scanf("%u", &Negozi[i].scul[k].Id);

      printf("Titolo della scultura: ");
      scanf(" %[^\n]", Negozi[i].scul[k].Titolo);

      printf("Autore della scultura: ");
      scanf(" %[^\n]", Negozi[i].scul[k].Autore);

      printf("Prezzo della scultura: ");
      scanf("%u", &Negozi[i].scul[k].Prezzo);

    }

  }

  Costruisci(&Negozi[0], P, &Scultura[0], Ne);

  printf("Il primo elemento è: %d. \n", Scultura[0].Id);

  return 0;

}
      
void Costruisci(negozio_t* Ng, int P, scultura_t* Sc, int Ne){

  int i, k, h;

  h = 0;

  for(i = 0; i < Ne; i++){

    for(k = 0; k < (Ng + i) -> nsc; k++){

      if((Ng + i) -> scul[k].Prezzo >= P){

	(Sc + h) -> Id = (Ng + i) -> scul[k].Id;

	h++;

      }

    }

  }

}
