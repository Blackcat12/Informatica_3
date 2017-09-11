#include<stdio.h>
#include<stdlib.h>
/*
program:Filtrare gli elemtni.
Diego Gattari
3INA
11/09/2017
versione 1.0
*/
int main(){
	int numeri[10];//vettore per inserire i numeri
	int pari[10];//vettore per inserire i numeri filtrati
	int i;//contatore
	int x;//contatore
	printf("inserisci il valore del vettore\n");
	for(i=0;i<10;i++){
		scanf("%d",& numeri[i]);
	}
	x=0;
	for(i=0;i<10;i++){
		if(numeri[i]%2==0){
			pari[x]=numeri[i];
			x++;
		}
	}
	for(i=0;i<x;i++){
		printf("%d  ", pari[i]);
	}
	system("PAUSE");
}
