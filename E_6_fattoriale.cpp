#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Diego Gattari
  3INA
  30/12/2016
  programma:media
  ver 1.0
*/
main () {
	int n;
	int i;
	int fatt;
	scanf("%d", &n);
    for(i=1;n>=i;i=i+1){
    	fatt=n*(n-1);
    	n--;
	 }
	 	printf("il fattoriale e' %d  \n",fatt);
 } 
