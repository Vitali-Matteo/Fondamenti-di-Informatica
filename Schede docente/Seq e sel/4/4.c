#include<stdio.h>

int main(){

  int sec1, min1;
  int sec2, min2;

  int oreT, minT, secT;

  printf("Inserisci la durata nella forma ..,..: ");
  scanf("%d,%d", &min1, &sec1);

  printf("\n");

  printf("Inserisci la durata del secondo esperimento nella forma ..,..: ");
  scanf("%d,%d", &min2, &sec2);

  minT = min1 + min2 + (sec1 + sec2) / 60;

  secT = (sec1 + sec2) % 60;

  oreT = minT / 60;

  minT = minT % 60;

  printf("La somma delle durate dei due esperimenti è: %d ore, %d minuti e %d secondi.\n", oreT, minT, secT);

  return 0;

}

  
