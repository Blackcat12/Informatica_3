#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Diego Gattari 
3°INA
29/11/2016
 numero perfetto
Versione 2.0*/
int main(){
	int numero1;    // variabile per il primo numero e i suoi criteri di verifica 
	int numero2;   // variabile per il secondo numero e i suoi criteri di verifica
	int numero;   //numero da verificare
	int d;  //divisore
	int somma; //somma dei divisori
	
	d=1;
	somma=0;
	do  													//verifica se il numero n1 rispetta le  condizioni
	{
		printf("Inserisci un numero minore di 10.000 e pari\n");
		scanf("%d", &numero1);
	}while(((numero1%2)!=0) || (numero1>=10000));
    do														//verifica se il numero2 rispetta le  condizioni
	{
		printf("Inserisci un secondo numero  maggiore del primo e dispari\n");
		scanf("%d", &numero2);
	}while((numero2<=numero1) || (numero2%2==0));
	do														//verifica se il numero rispetta le condizioni
	{
		printf("Inserisci il numero che si vuole verificare ,deve essere compreso tra :%d   %d\n",numero1,numero2);
		scanf("%d", &numero);
	}while((numero<=numero1) || (numero>=numero2));                             
	                                       
	while(d<=(numero/2)) {                                  /*con questa condizione ripeto il ciclo  fin quando  il divisore non è la metà del numero  successivamente sommo il divisore alla somma dei divisori*/
		if((numero %2)==0) {	
		somma=somma+d;
		}
	    d=d+1;	
	}
	if(somma==numero) {												/* se la somma dei divisori è uguale al numero allora  dico che è perfetto, altrimenti no*/													   
		printf("\nIl numero e' perfetto");
		}else{
			printf("\nIl numero non e' perfetto");
		}
	}
	
