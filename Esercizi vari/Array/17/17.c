#include<stdio.h>

#define L 20

typedef struct{

  int Qmax;

  int Parray;

}QMAX_t;

int main(){

  int Quotazioni[L];

  int i, k;

  QMAX_t qMax;

  int Pcost;

  int flag;

  printf("Inerisci le %d quotazioni: \n", L);

  for(i = 0; i < L; i++){

    scanf("%d", &Quotazioni[i]);

    if((Quotazioni[i] < 0) || (Quotazioni[i] > 100)){

      Quotazioni[i] = 0;

    }

  }

  printf("Cerco la quotazione massima... \n");

  qMax.Qmax = Quotazioni[0];

  for(i = 0; i < L; i++){

    if((Quotazioni[i] != 0) && (Quotazioni[i] > qMax.Qmax)){

      qMax.Qmax = Quotazioni[i];
      qMax.Parray = i;

    }

  }

  printf("Stampo la struttura dati... \n");
  printf("Massimo: %d. \n", qMax.Qmax);
  printf("Data: %d. \n", qMax.Parray);

  Pcost = 0;

  k = 0;

  for(i = 0; i < L; i = k){

    for(k = i + 1; Quotazioni[k] == Quotazioni[i] && k < L; k++);

    if(k - i > 1){

      Pcost++;

    }

  }

  printf("Il numero di periodi in cui è costante è: %d. \n", Pcost);

  Pcost = 0;

  flag = 0;

  for(i = 1; i < L; i++){

    if((Quotazioni[i] == Quotazioni[i - 1]) && (!flag == 1)){

      Pcost++;
      flag = 1;

    }
    else{

      if(Quotazioni[i] != Quotazioni[i - 1]){

	flag = 0;

      }

    }

  }

  printf("Il numero di periodi in cui è costante è: %d. \n", Pcost);

  return 0;

}

  

    
