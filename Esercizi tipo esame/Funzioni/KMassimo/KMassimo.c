#include<stdio.h>

#define N 100

int KMassimo(int v[], int K, int La);

int main(){

  int v[N];

  int K, Ik;

  int La;

  int i;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci gli elementi dell'array: \n");

  for(i = 0; i < La; i++){

    scanf("%d", &v[i]);

  }

  do{

    printf("Inserisci il valore di K: ");
    scanf("%d", &K);

  }while((K < 0) || (K > La / 2));

  Ik = KMassimo(v, K, La);

  if(Ik == -1){

    printf("Nessun i trovato. \n");

  }
  else{

    printf("Indice i trovato: %d. \n", Ik);

  }

  return 0;

}

int KMassimo(int v[], int K, int La){

  int i, k;

  int Trovato;

  Trovato = 0;

  for(i = K; i < La - K && !Trovato; i++){

    Trovato = 1;

    for(k = i - K; k < i + K + 1; k++){

      if((v[k] > v[K]) && (k != K)){

	Trovato = 0;

      }

    }

  }

  if(Trovato == 1){

    return i - 1;

  }
  else{

    return -1;

  }

}
    

    
