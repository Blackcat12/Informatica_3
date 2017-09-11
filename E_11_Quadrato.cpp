#include<stdio.h>
#include<stdlib.h>
/*
program:Quadrato.
Diego Gattari
3INA
11/09/2017
versione 1.0
*/
int main(){
int n;//lato quadrato
int i;//contatore
int d;
  do{
	printf("\ninserisci il numero di asterischi utilizzati per il lato del quadrato:  ");
	scanf("%d",&n);
  }while((2>n) || (n>20));
  i=0;
 while(i<n){
		d=0;
		while(d<n){
			printf("*");
			d++;
		}
		printf("\n");
		i++;
	}
}

