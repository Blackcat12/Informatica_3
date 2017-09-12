#include<stdio.h>
#include<stdlib.h>
/*Alunno Diego Gattari
Classe 3°INA
Data 12/00/2017
Versione 1.0*/
int main () {
	int i;//contatore
	int pos;//posizione dell'elemento da eliminare
	int v[10]={2,6,9,4,5,1,11,19,10,90};//vettore
	int tot;
	tot=10;
	printf("inserisci la posizione dell'elemento da eliminare:  ");
	scanf("%d",&pos);
	for(i=pos;i<(tot-1);i++){
		v[i]=v[i+1];
	}
	tot--;
	for(i=0;i<tot;i++){
		printf("%d",v[i]);
	}
}

