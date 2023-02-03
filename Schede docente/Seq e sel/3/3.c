#include<stdio.h>

int main(){

  int min, sec;
  int ore;

  ore = 0;
  
  printf("Inserisci minuti e secondi nel formato .. , ..: ");
  scanf("%d,%d", &min, &sec);

  min = min + (sec - sec % 60) / 60;

  ore = ore + (min - min % 60) / 60;

  printf("L'esperimento è durato: %d ore, %d minuti e %d secondi.\n", ore, min %60, sec % 60);

  return 0;

}
  
