#include<stdio.h>
#include<stdlib.h>
/*
program:confronto tra 2 stringhe
Diego Gattari
3INA
13/09/2017
versione 1.0
*/
int main () {
	char nome1[100];//vettore dove inserire il primo nome
	char nome2[100];// vettore dove inserire il secondo nome
	int i;//contatore
	int uguali;//var per vedere se sono uguali i nomi 
	
	printf("Inserisci il primo nome: ");
	scanf("%s", nome1);
	printf("Inserisci il secondo nome: ");
	scanf("%s", nome2);
	i=0;
	uguali=0;
	 while(uguali==0 && (nome1[i]!='\0' || nome2[i]!='\0')){//ciclo per vedere l'ugualianza fra i nomi 
		 if(nome1[i]==nome2[i]){
			 uguali=1;
	    	}
		 i++;
    	}
	  if(uguali==1){//stampa 
	    	printf("Sono uguali");
	  }else{
		    printf("Non sono uguali");
	  }

}

