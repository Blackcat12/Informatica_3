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
	int vet[10];//vettore che serve per inserire i numeri e stamparli in modo inverso
	int x;//contatore
	printf("INSERISCI I NUMERI DEL VETTORE\n\n\n");
	for(x=0;x<10;x++){
		scanf("%d",& vet[x]); //input del vettore
	}
	printf("\n\n\n");
	for(x=9;x>=0;x--){
		if(vet[x]!=0){  //output del vettore al contrario
		printf("%d", vet[x]);
      	}
	}
}
