/*
autore= Diego Gattari
classe= 3 IN A
data= 30/12/2016
programma= Media
ver: 1.0
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;//variabile che contiene il numero dei numeri da inserire
	int n1;//variabile che contiene il numero
	int i;//contatore
	int somma;
	int media;
	printf("inserisci il numero dei numeri\n");
	scanf("%d",n);
	i=0;
	somma=0;
	while(i<n){
		printf("inserisci il numero\n");/*questo ciclo si ripete fin quando il contatore è minore di i e somma n alla somma*/
		scanf("%d",n1);                    
		somma=somma+n1;                   
		i++;
	}
	media=somma/n;
	printf("\n la media è di: %d",media);
	
}
