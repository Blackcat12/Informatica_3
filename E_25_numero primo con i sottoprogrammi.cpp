#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Alunno Diego Gattari 
Classe 3°INA
Data 14/09/2017
Versione 1.0*/
int main () {
	int numero;//variabile che contine il numero dove lavoreremo
	int r;//variabile che richiama il sottoprogramma
	printf("Inserisci un numero:  ");
	scanf("%d", & numero);
	r=primo_n(numero);
	if(r==0){//ciclo per vedere se il numero è primo o no 
		printf("Il numero che abbiamo inserito e' primo  ");
	}else{
		printf("Il numero che abbiamo inserito non e' primo  ");
	}
}
int primo_n (int numero){
	int d;//contatore
	int p;//variabile che permette di vedere se il numero è primo
	d=numero-1;
	p=0;
	
	while((d>=2) && (p==0)){
		if(numero%d==0){
			p=1;
		}
		d=d-1;
	}
	return p;
}

