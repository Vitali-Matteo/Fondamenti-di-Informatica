#include<stdio.h>

int main(){

  int Nsec;

  int Stot;
  int Mtot;
  int Otot;
  int Gtot;

  printf("Inserisci il numero di secondi che voui convertire: ");
  scanf("%d", &Nsec);

  Stot = Nsec % 60;

  Mtot = (Nsec - Nsec % 60) / 60;

  Otot = (Mtot - Mtot % 60) / 60;

  Mtot = Mtot % 60;

  Gtot = (Otot - Otot % 24) / 24;

  Otot = Otot % 24;

  printf("%d secondi equivalgono a: %d giorni, %d ore, %d minuti e %d secondi.\n",Nsec, Gtot, Otot, Mtot, Stot);

  return 0;

}

  

  

  

  
