#include<stdio.h>

int main(){

  int a, b, c;

  printf("Inserisci i tre numeri a, b e c separati da una |: ");
  scanf("%d | %d | %d", &a, &b, &c);

  if((a + b > c) && (b + c > a) && (a + c > b)){

    if((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c *c == a * a)){

      printf("Vale la d. triangolare e si tratta di una terna pitagorica. \n");

    }
    else{

      printf("Vale la d. triangolare, ma non si tratta di una terna pitagorica. \n");

    }

  }
  else{

    printf("Non vale la disuguaglianza triangolare.\n");

  }

  return 0;

}
