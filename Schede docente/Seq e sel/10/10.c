#include<stdio.h>

int main(){

  int anno;

  printf("Inserisci un anno: ");
  scanf("%d", &anno);

  if(anno % 400 != 0){

    if(anno % 4 == 0){

      if(anno % 100 != 0){

	printf("1");

      }

    }
    else{

      printf("0");

    }
    
  }
  else{

    printf("1");

  }

  return 0;

}
    
	 
	  
