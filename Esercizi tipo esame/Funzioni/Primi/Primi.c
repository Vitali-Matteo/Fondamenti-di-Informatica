#include<stdio.h>

#define N 1000

int Primo(int n);

void Riduci(int v[], int La);

int Riduci_v2(int v[], int La);

int main(){

  int v[N];

  int v2[N];

  int La;

  int i;

  int Rid;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci l'array: \n");

  for(i = 0; i < La; i++){

    scanf("%d", &v[i]);

    v2[i] = v[i];

  }

  Riduci(v, La);

  printf("Il vettore ridotto è: \n");

  for(i = 0; i < La; i++){

    if(v[i] != - 1){

      printf("%d  ", v[i]);

    }

  }

  Rid = Riduci_v2(v2, La);

  printf("\nSecondo vettore ridotto: \n");

  for(i = 0; i < La - Rid; i++){

    printf("%d  ", v2[i]);

  }

  printf("\n");

  return 0;

}

int Primo(int n){

  int i;

  int Primo;

  Primo = 1;

  i = 2;

  while((i <= n / 2) && (Primo == 1)){

    if(n % i == 0){

      Primo = 0;

    }

    i++;

  }

  return Primo;

}

void Riduci(int v[], int La){

  int i, k;

  for(i = 0; i < La; i++){

    if(v[i] != - 1){

      if(Primo(v[i]) == 0){

	for(k = i; k < La - 1; k++){

	  v[k] = v[k + 1];

	}

	i--;

	v[La - 1] = - 1;

      }

    }

  }

}

int Riduci_v2(int v[], int La){

  int i, k;

  int Rid;

  Rid = 0;

  for(i = 0; i < La - Rid; i++){

    if(Primo(v[i]) == 0){

      for(k = i; k < La - 1 - Rid; k++){

	v[k] = v[k + 1];

      }

      i--;

      Rid++;
       
    }

  }

  return Rid;

}
