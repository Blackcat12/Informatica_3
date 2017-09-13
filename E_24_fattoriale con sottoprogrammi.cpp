#include<stdio.h>
#include<stdlib.h>
/*
program:fattoriale con sottoprogramma
Diego Gattari
3INA
13/09/2017
versione 1.0
*/
int main () {
	int r;
	int n;
	
	do{//ciclo per rendere l'inserimento del numero corretto
		printf("Inserisci un numero:  ");
		scanf("%d", & n);
	}while(n<0);
	r=fat_n(int n);//operazione che richiama il sottoprogramma
	printf("Il fattoriale è:   %d", r);
	system("PAUSE");
}

int fat_n (int n){//sottoprogramma
	int a;
	a=1;
	if(n>=0){
		while(n!=0){
			a=a*n;
			n--;
		}
	}
	return a;
}
