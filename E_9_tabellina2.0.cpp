#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*
program:Tabellina 2.0 che stampa le tabelline dei numeri da 2 a 10
Diego Gattari
3INA
18/12/2016
versione 1.0
*/
int main()
{
	int n;   //inserisco la variabile che dovrà essere inizializzata a 2
	int tab; //inserisco la variabile che svolgerà l'operazione
	int i; //contatore
	n=2;
	while(n<10){
		i=1;                 //il primo ciclo si ripete fin quando la variabile n 
		tab=0;               // sarà minore di 10 il secondo ciclo dove si svolge l'operazione 
		while(i<=10){          //sarà ripetuto fin quando la variabile contatore sarò
			tab=n*i;            //9 per poi stampare il valore di tab che rispecchia 
			printf("%d", tab);   //le tabelline  
			i++;
		}
		    printf("\n");
		    n++;
		
	}
	
}
