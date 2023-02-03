#include<stdio.h>

int main(){

  int a, b, c;

  /* Altro modo per inserire i tre valori:

     printf("Inserisci i tre valori della terna, separando i valori da una virgola e scrivendo le due parentesi (...): ");

     scanf("(%d, %d, %d)", &a, &b, &c);

  */

  printf("Inserisci il valore di a: ");
  scanf("%d",&a);

  while(a <= 0){

    printf("Errore. Inserisci un altro valore: ");
    scanf("%d", &a);

  }

  printf("Inserisci il valore di b: ");
  scanf("%d", &b);

  while(b <= 0){

    printf("Errore. Inserisci un altro valore: ");
    scanf("%d", &b);

  }

  printf("Inserisci il valore di c: ");
  scanf("%d", &c);

  while(c <= 0){

    printf("Errore. Inserisci un altro valore: ");
    scanf("%d", &c);

  }

  /*
    Notare che avremmo potuto scrivere 3 nuove variabili: 

      A = a * a;
      B = b * b;
      C = c * c;
      
    Una soluzione di questo tipo è da prefersi a questa perchè ho una maggiore chiarezza di quale è il contenuto dell varie variabili e delle operazioni che sto facendo!! 
  */

  if((a + b > c) && (b + c > a) && (a + c > b)){

    if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)){

      printf("La terna (%d, %d, %d) è una terna pitagorica. \n", a, b, c);

    }
    else{

      printf("La terna (%d, %d, %d) non è una terna pitagorica. \n", a, b, c);

    }

  }
  else{

    printf("La terna (%d, %d, %d), non soddisfa la disuguaglianza triangolare. \n", a, b, c);

  }

  return 0;

}
