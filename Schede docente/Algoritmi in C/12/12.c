#include<stdio.h>

int main(){

  float l1, l2, l3;

  printf("Inserisci i tre lati del trinagolo separati da uno spazio: ");
  scanf("%f %f %f", &l1, &l2, &l3);

  if((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)){

    printf("Vale la d. triangolare. \n");

    if((l1 == l3) && (l2 == l3) && (l1 == l2)){

      printf("T. equilatero.\n");

    }
    else{

      if((l1 == l3) || (l2 == l3) || (l1 == l2)){

	printf("T. isoscele.\n");

      }
      else{

	 printf("T. scaleno.\n");

      }

    }

  }
  else{

    printf("Non vale la d. triangolare. \n");

  }

  return 0;

}

    
