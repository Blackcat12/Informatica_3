#include<stdio.h>
#include<stdlib.h>
/*Alunno Diego Gattari
Classe 3°INA
Data 12/00/2017
Versione 1.0*/

	int main () {
	int num[10]= {1,4,9,7,10};
	int tot=5;
	int max=10;
	int x;
	int n;
	int p;
	int trovato;
	int i;
	
	 printf("Inserisci il  numero:   ");
	 scanf("%d",& n);
	 if(tot<max){
	 	trovato=0;
	 	i=0;
	 	while((i<tot) && (trovato==0)){
	 	 if(n<=num[i]){
	 		trovato=1;
			}else{
		    i++;
			 }
		 }
	 }
	 
	 x=tot--;
	 while(x>=i){
	 	num[x+1]=num[x];
	 	x--;
	 }
	 
	 num[i]=n;
	 tot++;
	 
	 for(p=0;p<tot;p++){
	 	printf("%d", num[p]);
	 }
	 
}
	
	

