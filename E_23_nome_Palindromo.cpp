#include<stdio.h>
#include<stdlib.h>
/*
program:numeri inversi
Diego Gattari
3INA
15/04/2017
versione 1.0
*/
int main()
{
  int cont;//contatore
  int palindromo;//variabile per riconoscere il nome palindromo o meno
  int i;//contastore
  char parola[100];//vettore dov'è situato il nome 
  scanf("%s", parola);
  cont=0;
  palindromo=1;
  while(parola[cont]!='\0'){//conteggio di quante lettere è fomrato il nome
  	cont=cont+1;
  }
  cont--;
  i=0;
  while(parola[cont]==parola[i] && cont>i){//controllo se il nome è palindromo
  	i++;
  	cont--;
  }
   if(cont<i){
   	printf("nome palindromo");
   }else{
    printf("nome non palindromo");
   }
}
