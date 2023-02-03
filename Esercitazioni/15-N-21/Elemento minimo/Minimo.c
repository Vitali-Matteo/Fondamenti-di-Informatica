#include<stdio.h>
#include<limits.h> /*Contiene tutti i limiti delle variabili int, float e double*/

#define N 10

int Minimo(int v[], int i);

int main(){

  int v[N];

  int i;

  int Minimo_v;

  printf("Inserisci gli elementi dell'array di lunghezza %d: \n", N);

  for(i = 0; i < N; i++){

    scanf("%d", &v[i]);

  }

  Minimo_v = Minimo(v, N);

  printf("Il minimo elemento dell'aarray è: %d.\n", Minimo_v);

  return 0;

}

int Minimo(int v[], int i){ /*Si tratta di una funzione tail-recursive vhe viene trasformata automaticamente in un ciclo per rendere l'esecuzione più veloce*/

  int Min_resto;

  if(i == 1){

    return v[0];

  }
  else{

    Minimo(v, i - 1);

    if(v[i - 1] < Min_resto){

      return v[i - 1];

    }
    else{

      return Min_resto;

    }

  }

}

int Minimo_2(int v[], int i, int La, int min){

  if(i >= La){

    return min;

  }
  else{

    if(v[i] < min){

      min = v[i];

    }
    else{

      return Minimo_2(v, i + 1, La, min); /*Il min non è più lo stesso...*/

    }

  }

}

    

