#include<stdio.h>

#define PMAX 15

#define NS 30
#define M 30

typedef struct{

  unsigned int Nmat;

  char Nome[M];

  char Cogn[M];

}Studente_t;

typedef struct{

  Studente_t Cand;

  unsigned int PuntA;

  unsigned int PuntB;

}Esame_t;

int main(){

  Esame_t v[NS];

  int i;

  int vmin;

  int vmax;

  int S;

  int Ns;

  float Media;

  do{

    printf("Inserisci il numero di studenti che vuoi inserire: ");
    scanf("%d", &Ns);

  }while((Ns < 0) || (Ns > NS));

  for(i = 0; i < Ns; i++){

    printf("Inserisci il nome del candidato %d: ", i + 1);
    scanf(" %[^\n]", v[i].Cand.Nome);

    printf("Inserisci il cognome del candidato: %d: ", i + 1);
    scanf(" %[^\n]", v[i].Cand.Cogn);

    printf("Inserisci matricola del candidato %d: ", i + 1);
    scanf("%u", &v[i].Cand.Nmat);

    do{

      printf("Inserisci il voto della parte A del candidato %d: ", i + 1);
      scanf("%u", &v[i].PuntA);

    }while((v[i].PuntA < 0) || (v[i].PuntA > 15));

    do{

      printf("Inserisci il voto della parte B del candidato %d: ", i + 1);
      scanf("%u", &v[i].PuntB);

    }while((v[i].PuntB < 0) || (v[i].PuntB > 15));

  }
    
  vmin = v[0].PuntA + v[0].PuntB;

  vmax = v[0].PuntA + v[0].PuntB;

  S = 0;

  for(i = 0; i < Ns; i++){

    if(v[i].PuntA + v[i].PuntB > vmax){

      vmax = v[i].PuntA + v[i].PuntB;
      
    }

    if(v[i].PuntA + v[i].PuntB < vmin){

      vmin = v[i].PuntA + v[i].PuntB;

    }

    S = S + v[i].PuntA + v[i].PuntB;

  }

  Media = (float) S / Ns;

  printf("Il voto minimo è di: %d. \n", vmin);

  printf("Il voto massimo è di: %d. \n", vmax);

  printf("La media dei voti dei %d studenti è: %f. \n", Ns, Media);

  for(i = 0; i < Ns; i++){

    if(v[i].PuntA + v[i].PuntB >= 18){

      if(v[i].PuntA <= 8){

	printf("%s %s: A. \n", v[i].Cand.Nome, v[i].Cand.Cogn);

      }

      if(v[i].PuntB <= 8){

	printf("%s %s: B. \n", v[i].Cand.Nome, v[i].Cand.Cogn);

      }

    }

  }

  return 0;

}

    

  
