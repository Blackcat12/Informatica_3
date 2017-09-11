#include<stdio.h>
#include<stdlib.h>
/*
program:Ricerca sequenziale in un array con sentinella.
Diego Gattari
3INA
11/09/2017
versione 1.0
*/
int main(){
	int i;//contatore
	int v[10]= {5,9,16,10,4,3,7,11,1,0};//vettore per inserire i numeri
	int n;//numero da cercare
	int pos;//posizione
	i=0;
	printf("inserisci il numero da cercare:  ");
	scanf("%d",& n);
	while(v[i]!=n){
		i++;
	}
	pos=i;
	if(pos<10){
		printf("trovato in posizione %d",pos);	
	}else{
		printf("non trovato");
	}
	
}
