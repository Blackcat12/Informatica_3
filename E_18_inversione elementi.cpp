#include<stdio.h>
#include<stdlib.h>
/*
program:Inversione dei valori di un Array
Diego Gattari
3INA
15/04/2017
versione 1.0
*/
int main(){
	int i;//contatore
	int i1;//contatore
	int a;//variabile d'appoggio
	int v[10]={1,2,3,4,5,6,7,8,9,10};
	i1=0;
	for(i=9;i>i1;i--){//ciclo per invertire i valori
		a=v[i];
		v[i]=v[i1];
		v[i1]=a;
		i1++;
	}
for(i=0;i<10;i++){
		printf("%d",v[i]);
	}
	system("PAUSE");
}

