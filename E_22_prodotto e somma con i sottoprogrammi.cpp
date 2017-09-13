#include<stdio.h>
#include<stdlib.h>
/*
program:confronto tra 2 stringhe
Diego Gattari
3INA
13/09/2017
versione 1.0
*/
int main() {
	int n1;//numero 1
	int n2;//numero 2
	int somma;//somma
	int prodotto;//prodotto
	printf("Inserisci il primo numero:  ");
	scanf("%d", & n1);//input primo numero
	printf("Inserisci il secondo numero:  ");
	scanf("%d", & n2);//input secondo numero
	
	somma=somma_n(n1,n2);//richiamo il sottoprogramma della somma
	prodotto=prodotto_n(n1,n2);//richiamo il sottoprogramma del prodotto
	
	printf("La somma e': %d \n", somma);
	printf("Il prodotto e': %d \n", prodotto);
	
	system("PAUSE");
}

int somma_n (int n1,int n2){
	int somma=n1+n2;
	return somma;
}

int prodotto_n(int n1,int n2){
	int prodotto=n1*n2;
	return prodotto;
}


