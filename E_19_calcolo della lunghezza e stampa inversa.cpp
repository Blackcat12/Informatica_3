#include<stdio.h>
#include<stdlib.h>
/*
program:Calcolo della lunghezza e stampa inversa
Diego Gattari
3INA
13/09/2017
versione 1.0
*/
int main(){
	char nome[10];//vettore contenente il nome
	int c;//contatore
	int i;//contatore
	printf("Come ti chiami? \n ");
	scanf("%s",nome);
	while(nome[c]!=0){
		c++;
	}
	printf("il numero è lungo:  %d",c);
	for(i=c;i>=0;i--){
		printf("%s",nome[i]);
	}
	
	
}
