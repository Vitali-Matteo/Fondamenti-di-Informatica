#include<stdio.h>
#include<string.h>

#define N 9

void Replica(char s[], int n, char* sr, int lungh);

int main(){

  char s[N + 1];

  int n;

  char sr[50 * N + 1];

  printf("Inserisci la stringa da ripetere: ");
  scanf(" %[^\n]", s);

  do{

    printf("Inserisci il numero di ripetizioni: ");
    scanf("%d", &n);

  }while((n < 0) || (n > 400));

  Replica(s, n, &sr[0], 100 * N + 1);

  printf("La stringa replicata è: %s. \n", sr);

  return 0;

}

void Replica(char s[], int n, char* sr, int lungh){

  int i;

  if((n == 0) || (lungh - strlen(s) <= 0)){

    *sr = '\0';

  }
  else{

    for(i = 0; s[i] != '\0'; i++){

      *sr  = s[i];

      sr = sr + 1;

    }

    Replica(s, n - 1, sr, lungh - strlen(s));

  }

}

    
