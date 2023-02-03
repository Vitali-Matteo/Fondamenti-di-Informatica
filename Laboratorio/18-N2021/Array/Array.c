#include<stdio.h>

#define N 100

int Check(int v[], int w[], int len);

void Load(int v[], int len);

int main(){

  int v[N], w[N];

  int La;

  int Uguali;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci il rpimo array: \n");

  Load(v, La);

  printf("Inserisci il secondo array: \n");

  Load(w, La);

  Uguali = Check(v, w, La);

  printf("Il risultato del check è: %d. \n", Uguali);

  return 0;

}

void Load(int v[], int len){

  int i;

  for(i = 0; i < len; i++){

    scanf("%d", &v[i]);

  }

}

int Check(int v[], int w[], int len){

  int i, k, h;

  int Uguali;

  int Temp;

  Uguali = -1;

  for(i = 0; i < len && Uguali == -1; i++){

    Uguali = i;

    for(h = 0; h < len; h++){

      if(v[h] != w[h]){

	Uguali = -1;

      }

    }

    Temp = w[len - 1];

    for(k = len - 2; k >= 0; k--){

      w[k + 1] = w[k];

    }

    w[0] = Temp;

  }

  return Uguali;

}

    
