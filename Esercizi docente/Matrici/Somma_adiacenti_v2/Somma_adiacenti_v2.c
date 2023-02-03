#include<stdio.h>

#define NR 5
#define NC 5

int main(){

  int mat[NR + 2][NC + 2];

  float Medie[NR][NC];

  int i, k, j, h;

  int S;

  float Media;

  printf("Inserisci la matrice %d X %d riga per riga: \n", NR, NC);

  for(i = 0; i < NR + 2; i++){

    for(k = 0; k < NC + 2; k++){

      mat[i][k] = 0;

    }

  }

  for(i = 1; i < NR + 1; i++){

    for(k = 1; k < NC + 1; k++){

	scanf("%d", &mat[i][k]);

    }

  }

  for(i = 1; i < NR + 1; i++){

    for(k = 1; k < NC + 1; k++){

      S = 0;

      for(j = i - 1; j < i + 2; j++){

	for(h = k - 1; h < k + 2; h++){

	  S = S + mat[h][k];

	}

      }

      S = S - mat[i][k];

      if(((i == 1) && (k == 1) || ((i == NR) && (k == NC)) || ((i == NR) && (k == 1)) || ((i == 1) && (k == NC))){

	  Media = (float) S / 3.0;

	}
	


	

	

      
      
    

      
      
	

  /*S = 0;

  for(i = PR; i < PR + 3; i++){

    for(k = PC; k < PC + 3; k++){

      S = S + mat[i][k];

    }

  }

  S = S - mat[PR + 1][PC + 1];

  if(((PR == 0) && (PC == 0)) || ((PR == NR) && (PC == NC)) || ((PR == NR) && (PC == 0)) || ((PR == 0) && (PC == NC))){

    Media = (float) S / 3.0;

  }
  else{

    if((PR == 0) || (PR == NR) || (PC == NC) || (PC == 0)){

      Media = (float) S / 5.0;

    }
    else{

      Media = (float) S / 6.0;
      
    }

    }*/

  return 0;

}
 
