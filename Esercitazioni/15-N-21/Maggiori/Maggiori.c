#include<stdio.h>

#define N 100

int Maggiore_ric(int v[], int Pa, int La, int m);

int Maggiore_it(int v[], int La, int m);

int Maggiore_ric_2(int v[], int La, int m);

int Maggiore_ric_3(int* v, int* v_end, int m);

int main(){

  int v[N];

  int m;

  int La;

  int Maggiori;

  int i;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci gli elementi dell'array: ");

  for(i = 0; i < La; i++){

    scanf("%d", &v[i]);

  }

  printf("Inserisci il numero da confrontare: ");
  scanf("%d", &m);

  Maggiori = Maggiore_it(v, La, m);

  printf("Risultato della prima iterativa: %d. \n", Maggiori);

  Maggiori = Maggiore_ric(v, 0, La, m);

  printf("Risultato della prima ricorsiva: %d. \n", Maggiori);

  Maggiori = Maggiore_ric_2(v, La, m);

  printf("Risultato della seconda ricorsiva: %d. \n", Maggiori);

  Maggiori = Maggiore_ric_3(&v[0], &v[La - 1], m);

  printf("Risultato della terza ricorsiva: %d. \n", Maggiori);
  

  return 0;

}

int Maggiore_it(int v[], int La, int m){

  int i;

  int Maggiori;

  Maggiori = 1;

  for(i = 0; i < La && Maggiori; i++){

    if(v[i] > m){

      Maggiori = 0;

    }

  }

  return Maggiori;

}

int Maggiore_ric(int v[], int Pa, int La, int m){

  if(Pa == La){

    return 1;

  }
  else{

    if(v[Pa] > m){

      return Maggiore_ric(v, Pa + 1, La, m);

    }
    else{

      return 0;

    }

  }

}

int Maggiore_ric_2(int v[], int La, int m){

  if(La <= 0){

    return 1;

  }
  else{

    if(v[La - 1] <= m){

      return 0;

    }
    else{

      return Maggiore_ric_2(v, La - 1, m);

    }

  }

}

int Maggiore_ric_3(int* v, int* v_end, int m){

  if(v == v_end){

    return 1;

  }
  else{

    if(*v <= m){

      return 0;

    }
    else{

      return Maggiore_ric_3(v + 1, v_end, m);

    }

  }

}
    
