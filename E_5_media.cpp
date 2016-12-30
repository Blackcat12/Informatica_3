/*
autore= Diego Gattari
classe= 3 IN A
data= 30/11/2016
programma= Media
ver: 1.0
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	int n1;
	int i;
	int somma;
	int media;
	printf("inserisci il numero dei numeri\n");
	scanf("%d",n);
	i=0;
	somma=0;
	while(i<n){
		printf("inserisci il numero\n");
		scanf("%d",n1);
		somma=somma+n1;
		i++;
	}
	media=somma/n;
	printf("\n la media è di: %d",media);
	
}
