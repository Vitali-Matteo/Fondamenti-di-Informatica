#include<stdio.h>
#include<string.h>

#define N 26
#define M 50

int Valida(int Nlett[], char Parola[]);

int Punteggio(int Nlett[], int Valore[], char Parola[]);

int main(){

  char Parola[M + 1];

  int Punt;

  int Nlett[N] = {9, 2, 2, 4, 12, 2, 3, 2, 9, 1, 1, 4, 2, 6, 8, 2, 1, 6, 4, 6, 4, 2, 2, 1, 2, 1};

  int Valore[N] = {1, 2, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  printf("Inserisci la parola su cui devo lavorare: ");
  scanf("%s", Parola);

  Punt = Punteggio(Nlett, Valore, Parola);

  printf("Il punteggio associato alla parola %s è: %d. \n", Parola, Punt);

  return 0;

}

int Valida(int Nlett[], char Parola[]){

  int i, k;

  int S;

  int Valida;

  if(strlen(Parola) >= 2){

    Valida = 1;

    for(i = 0; Parola[i] != '\0'; i++){

      S = 0;

      for(k = 0; Parola[k] != '\0'; k++){

	if(Parola[i] == Parola[k]){

	  S++;

	}

      }

      if(Nlett[Parola[i] - 'a'] < S / 2){

	Valida = 0;

      }

    }

  }
  else{

    Valida = 0;

  }

  return Valida;

}

int Punteggio(int Nlett[], int Valore[], char Parola[]){

  int i;

  int Punt;

  if(Valida(Nlett, Parola) == 1){

    Punt = 0;

    for(i = 0; Parola[i] != '\0'; i++){

      Punt = Punt + Valore[Parola[i] - 'a'];

    }

  }
  else{

    Punt = 0;

  }

  return Punt;

}
