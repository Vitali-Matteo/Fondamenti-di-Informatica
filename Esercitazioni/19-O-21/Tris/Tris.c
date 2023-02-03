#include<stdio.h>

#define N 3
#define S1 'X'
#define S2 'Y'

int main(){

  char Tris[N][N];

  char SimbVit;

  int Pr, Pc;

  int Vittoria;

  int nm;

  int i, k;

  nm = 0;

  Vittoria = 0;

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      Tris[i][k] = ' ';

    }

  }

  while(!Vittoria && nm < 9){

    do{

      printf("Giocatore 1 inserisce riga e colonna: ");
      scanf("%d,%d", &Pr, &Pc);

    }while((Tris[Pr][Pc] != ' '));

    Tris[Pr][Pc] = S1;

    nm ++;

    printf("La situazione di gioco a questo punto è la seguente: \n");

    for(i = 0; i < 3; i++){

      for(k = 0; k < 3; k++){

	printf("| %c ", Tris[i][k]);

      }

      printf("| \n");

    }

    printf("\n");

    for(i = 0; i < 3; i++){

      if((Tris[i][0] == Tris[i][1]) && (Tris[i][1] == Tris[i][2]) && (Tris[i][0] != ' ')){

	if(Tris[i][0] == S1){

	  SimbVit = S1;

	  Vittoria = 1;

	}
	else{

	  SimbVit = S2;

	  Vittoria = 1;

	}

      }

      if((Tris[0][i] == Tris[1][i]) && (Tris[1][i] == Tris[2][i]) && (Tris[0][i] != ' ')){

	if(Tris[0][i] == S1){

	  SimbVit = S1;

	  Vittoria = 1;

	}
	else{

	  SimbVit = S2;

	  Vittoria = 1;

	}

      }

    }

    if((Tris[0][0] == Tris[1][1]) && (Tris[1][1] == Tris[2][2]) && (Tris[1][1] != ' ')){

      if(Tris[0][0] == S1){

	SimbVit = S1;

	Vittoria = 1;

      }
      else{

	SimbVit = S2;

	Vittoria = 1;

      }

    }

    if((Tris[0][2] == Tris[1][1]) && (Tris[1][1] == Tris[2][0]) && (Tris[1][1] != ' ')){

      if(Tris[1][1] == S1){

	SimbVit = S1;

	Vittoria = 1;
	
      }
      else{

	SimbVit = S2;

	Vittoria = 1;

      }

    }

    do{

      printf("Giocatore 2 inserisce riga e colonna: ");
      scanf("%d,%d", &Pr, &Pc);

    }while(Tris[Pr][Pc] != ' ');

    Tris[Pr][Pc] = S2;

  }

  if((nm == 9) && (Vittoria == 0)){

    printf("Il risultato è un pari. \n");

  }
  else{

    if(SimbVit == S1){

      printf("Vince il primo giocatore. \n");

    }
    else{

      printf("Vince il secondo giocatore. \n");

    }

  }

  return 0;

}
    
     
   

	

	

	

      

  
