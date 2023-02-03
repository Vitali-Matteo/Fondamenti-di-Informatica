#include<stdio.h>

#include<string.h> /*Per una possibile variante...*/

#define N 99

#define M 19

int main(){

  int Voti[N];

  char Nomi[N][M + 1];

  int i;

  int Max, IMax;

  int NI;

  char Nome_Max[M + 1]; /*Per una possibile variante*/

  do{

    printf("Inserisci il numero degli studenti che vui avere: ");
    scanf("%d", &NI);

  }while((NI < 0) || (NI > N));

  for(i = 0; i < NI; i++){

    printf("Inserisci il nome dello studente numero %d: ", i + 1);
    scanf(" %[^\n]", Nomi[i]);

    do{

      printf("Inserisci il voto dello studente di nome %s: ", Nomi[i]);
      scanf("%d", &Voti[i]);

    }while((Voti[i] < 0) || (Voti[i] > 30));

  }

  Max = Voti[0];

  for(i = 0; i < NI; i++){

    if(Voti[i] > Max){

      Max = Voti[i];

      IMax = i;

      strcpy(Nomi[i], Nome_Max);

    }

  }

  printf("Lo studente che ha riportato il voto massimo è: %s. Il voto massimo è: %d. \n", Nomi[IMax], Max);

  return 0;

}
      
