#include<stdio.h>
#include<string.h>

#define N 30

int Check(char S[]);

int main(){

  char P[N];

  int Acc;

  printf("Inserisci la passoword che devo analizzare: ");
  scanf(" %[^\n]", P);

  Acc = Check(P);

  if(Acc == 1){

    printf("Passowrd accettabile... \n");

  }
  else{

    printf("Passowrd non accettabile... \n");

  }

  return 0;

}

int Check(char S[]){

  int i;

  int Lungh;

  int Acc, Nc;

  Lungh = strlen(S);

  Acc = 1;

  if(Lungh < 8){

    Acc = -1;

  }

  for(i = 0; i <= Lungh - 3; i++){

    if((S[i] == S[i + 1]) && (S[i + 1] == S[i + 2])){

      Acc = -1;

    }

  }

  Nc = 0;

  for(i = 0; i < Lungh; i++){

    if(isdigit(S[i])){

      Nc++;

    }

  }

  if(Nc < 1){

    Acc = -1;

  }

  Nc = 0;

  for(i = 0; i < Lungh; i++){

    if(!isdigit(S[i]) && (!isalpha(S[i]))){

      Nc++;

    }

  }

  if(Nc < 1){

    Acc = -1;

  }

  return Acc;

}
