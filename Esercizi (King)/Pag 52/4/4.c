#include<stdio.h>

int main(){

  int Prefisso, Pparte, Sparte;

  printf("Inserisci il numero considerato: ");
  scanf("(%d) %d - %d", &Prefisso, &Pparte, &Sparte);

  printf("Hai inserito: %.3d.%.3d.%.4d \n", Prefisso, Pparte, Sparte);

  return 0;

}
