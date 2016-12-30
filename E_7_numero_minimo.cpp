#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Diego Gattari
  3INA
  30/12/2016
  programma:trova il numero minimo
  ver 1.0
*/
main () {
	int i ; //contatore
	int min;//variabile che fa inserire il primo numero
	int n1;//variabile che fa inserire gli altri numeri
	int n;//variabiloe che fa inserire il numero dei numeri che vuole inserire l'utente
	printf(" quanti numeri vuoi mettere?\n");
    scanf("%d", &n);
    i=1;
    printf(" inserisci il primo numero\n");
    scanf("%d", &min);
    while(n>i){
    	i++;
    	scanf("%d", &n1);
    	 if(n1<min){ //tramite l'if si identifica qual'e il numero minimo
    	 	min=n1;
		 }
	}
        	printf("il numero minimo  e' %d  \n",min);
}
