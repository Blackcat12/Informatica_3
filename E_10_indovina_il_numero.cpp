#include<stdio.h>
#include<stdlib.h>
/*
program:indovina il numero
Diego Gattari
3INA
15/04/2017
versione 1.0
*/
int main()
{
	int nc;//variabile dove risiede il numero da trovare
	int j;//contatore
	int nu;//numero preso in input 
	int indovinato;//variabile che vede se abbiamo indovinato o no
	nc=rand();//numero random
	j=10;
	indovinato=0;
	do{
		printf("INSERISCI IL NUMERO\n\n\n");
		scanf("%d",&nu);//inserimento del numero
		if(nu==nc){
			indovinato=1;//se abbiamo indovinato...
		}
		j--;	
     }while(j>0 && indovinato==0); 
	if(indovinato==1){
		printf("hai indovinato");//se indovinato è uguale a 1
	}else{
		printf("non hai indovinato");//se indovinato è uguale a 0
	}
	
}
