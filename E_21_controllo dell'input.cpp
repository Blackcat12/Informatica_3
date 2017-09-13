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
	int n1;//primo numero
	int n2;//secondo numero
	n1=input_n();//per richiamare il sottoprogramma
	n2=input_n();//per richiamare il sottoprogramma
	if(n1>n2){
		printf("Il numero piu' grande e' %d \n", n1);
	}else{
		printf("Il numero piu' grande e' %d \n", n2);
	}
	system("PAUSE");
}

int input_n (){//sottoprogramma
	int n;
	printf("Inserisci un numero tra 0 e 100:  ");
	scanf("%d", & n);
	if((n<0) || (n>100)){
		input_n();
	}else{
		return n;
	}
}


