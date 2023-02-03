#include<stdio.h>

#define Ln 20
#define Ne 30
#define MAX 2

typedef struct{

  char Nome[Ln + 1];

  int voto;

}Exam;

typedef struct{

  int Cod;

  int Nef;

  Exam Esami[Ne];

}Student;

void Riempi(Student* S);

void Stampa(Student S[], int Cp);

Student MaxMedia(Student  S[]);

int main(){

  Student S[MAX];

  int Cp;

  Student MaxMed;

  int i;

  Riempi(&S[0]);

  printf("Inserisci un codice persona: ");
  scanf("%d", &Cp);

  Stampa(S, Cp);

  MaxMed = MaxMedia(S);

  printf("Codice: %d. \n", MaxMed.Cod);

  printf("Esami: \n");

  for(i = 0; i < MaxMed.Nef; i++){

    printf("%s: %d. \n", MaxMed.Esami[i].Nome, MaxMed.Esami[i].voto);

  }

  return 0;

}

void Riempi(Student* S){

  int i, k;

  for(i = 0; i < MAX; i++){

    printf("Cod. persona: ");
    scanf("%d", &S -> Cod);

    printf("Numero esam fatti: ");
    scanf("%d", &S -> Nef);

    for(k = 0; k < S -> Nef; k++){

      printf("Nome esame %d: ", i + 1);
      scanf("%s", S -> Esami[k].Nome);

      printf("Voto esame %d: ", i + 1);
      scanf("%d", &S -> Esami[k].voto);

    }

    S = S + 1;
    
  }

}

void Stampa(Student S[], int Cp){

  int Trovato;

  int i, k;

  Trovato = 0;

  for(i = 0; i < MAX && !Trovato; i++){

    if(S[i].Cod == Cp){

      Trovato = 1;

      for(k = 0; k < S -> Nef; k++){

	printf("%s: %d. \n", S[i].Esami[k].Nome, S[i].Esami[k].voto);

      }

    }

  }

  if(!Trovato){

    printf("Nessuno studente con cod. persona %d. \n", Cp);

  }

}

Student MaxMedia(Student S[]){

  int i, k;

  int Iv;

  int SV;

  float Mmax;

  SV = 0;

  Iv = 0;

  for(i = 0; i < S[0].Nef; i++){

    SV = SV + S[0].Esami[i].voto;

  }

  Mmax = SV / MAX;

  for(i = 0; i < MAX; i++){

    SV = 0;

    for(k = 0; k < S[i].Nef; k++){

      SV = SV + S[i].Esami[k].voto;

    }

    if(Mmax < SV / MAX){

      Mmax = SV / MAX;

      Iv = i;

    }

  }

  return S[Iv];

}

 
    

    
    

  
