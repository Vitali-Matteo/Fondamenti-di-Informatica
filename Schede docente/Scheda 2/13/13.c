#include<stdio.h>

int main(){

  float a, b;

  printf("Inserisci i coefficenti a e b separati da un /: ");
  scanf("%f / %f", &a, &b);

  if((a == 0) && (b == 0)){

    printf("Indeterminata.\n");
    
  }
  else{

    if(a == 0){

      printf("Impossibile.\n");

    }
    else{

      printf("La soluzione è: %f.\n", -b / a);

    }

  }

  return 0;
  
}
  

  

  

  
  
