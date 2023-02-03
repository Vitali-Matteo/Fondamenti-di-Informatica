#include<stdio.h>

#define N 100

#define Ln 30
#define Lc 30

typedef struct{

  char Nome[Ln + 1];
  
  char Cogn[Lc + 1];

  char s;

  int anno;

}Persona;

Persona Get_youngest(Persona Persone[], int Nl);

int main(){

  FILE* File;

  Persona Persone[N];

  Persona Giov;

  int Nl;

  int i, k;

  char c;

  File = fopen("Persona.txt", "r");

  if(File){

    fscanf(File, "%d", &Nl);

    for(i = 0; i < Nl; i++){

      /*k = 0;

      fscanf(File, " %c", &c); In questo modo non considero il carattere a capo che viene letto prima del nome
      
      while(c != ' '){

	Persone[i].Nome[k] = c;

	k++;

	fscanf(File, "%c", &c);

      }

      k = 0;

      fscanf(File, "%c", &c);

      while(c != ' '){

	Persone[i].Cogn[k] = c;

	k++;

	fscanf(File, "%c", &c);

      }

      fscanf(File, "%c", &Persone[i].s);

      fscanf(File, "%d", &Persone[i].anno);*/

      fscanf(File, "%s %s %c %d", Persone[i].Nome, Persone[i].Cogn, &Persone[i].s, &Persone[i].anno);

    }

    Giov = Get_youngest(Persone, Nl);

    printf("Nome e cognome della persona più giovane: %s %s. \n", Giov.Nome, Giov.Cogn);

    printf("Sesso dell persona più giovane: %c. Età: %d.\n", Giov.s, 2021 - Giov.anno);

    fclose(File);

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  return 0;

}

/*Persona Get_youngest(Persona Persone[], int Nl){

  int i;

  int mine;

  int Ind;

  mine = Persone[0].anno;

  for(i = 0; i < Nl; i++){

    if(Persone[i].anno > mine){

      mine = Persone[i].anno;

      Ind = i;

    }

  }

  return Persone[Ind];

  }*/

Persona Get_youngest(Persona Persone[], int Nl){ /*Si può fare anche così. Soluzione migliore!!*/

  int i;

  Persona Giovane;

  Giovane = Persone[0];

  for(i = 0; i < Nl; i++){

    if(Persone[i].anno > Giovane.anno){

      Giovane = Persone[i];

    }

  }

  return Giovane;

}
	

      
      
    
  
