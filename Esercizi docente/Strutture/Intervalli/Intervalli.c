#include<stdio.h>

#define N 10

typedef struct{

  int Giorni;

  int Ore;

  int Min;

  int Sec;

}Durata_temp_t;

Durata_temp_t Totale(Durata_temp_t A, Durata_temp_t B);

int main(){

  Durata_temp_t Intervalli[N];

  Durata_temp_t Somma;

  int i;

  int n;

  do{

    printf("Quanti elementi vuoi inserire? ");
    scanf("%d", &n);

  }while((n < 0) || (n > N));

  for(i = 0; i < N; i++){

    Intervalli[i].Giorni = 0;

    Intervalli[i].Ore = 0;

    Intervalli[i].Min = 0;

    Intervalli[i].Sec = 0;

  }

  for(i = 0; i < n; i++){

    do{

      printf("Inserisci numero ore: ");
      scanf("%d", &Intervalli[i].Ore);

    }while((Intervalli[i].Ore < 0) || (Intervalli[i].Ore > 23));

    do{

      printf("Inserisci numero minuti: ");
      scanf("%d", &Intervalli[i].Min);

    }while((Intervalli[i].Min < 0) || (Intervalli[i].Min > 59));

    do{

      printf("Inserisci numero secondi: ");
      scanf("%d", &Intervalli[i].Sec);

    }while((Intervalli[i].Sec < 0) || (Intervalli[i].Sec > 59));

    Intervalli[i].Giorni = 0;

  }

  Somma.Giorni = 0;

  Somma.Ore = 0;

  Somma.Min = 0;

  Somma.Sec = 0;

  for(i = 0; i < N; i = i + 2){

    Somma.Sec = Somma.Sec + Totale(Intervalli[i], Intervalli[i + 1]).Sec;

    Somma.Min = Somma.Min + Totale(Intervalli[i], Intervalli[i + 1]).Min;

    Somma.Ore = Somma.Ore + Totale(Intervalli[i], Intervalli[i + 1]).Ore;

    Somma.Giorni = Somma.Giorni + Totale(Intervalli[i], Intervalli[i + 1]).Giorni;

  }

  printf("Totale: %d giorno\\i, %d ora\\e, %d minuto\\i e %d secondo\\i. \n", Somma.Giorni, Somma.Ore, Somma.Min, Somma.Sec);

  return 0;

}

Durata_temp_t Totale(Durata_temp_t A, Durata_temp_t B){

  Durata_temp_t S;
  

  S.Sec = A.Sec + B.Sec;

  S.Min = A.Min + B.Min;

  S.Ore = A.Ore + B.Ore;

  S.Giorni = A.Giorni + B.Giorni;
  
  
  S.Min = S.Min + S.Sec / 60;

  S.Sec = S.Sec % 60;

  S.Ore = S.Ore + S.Min / 60;

  S.Min = S.Min % 60;

  S.Giorni = S.Giorni + S.Ore / 24;

  S.Ore = S.Ore % 24;

  return S;

}

  

    

  
