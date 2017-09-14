#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Alunno Diego Gattari 
Classe 3°INA
Data 14/09/2017
Versione 1.0*/
int main () {
	int c;
	int i;
	int j;
	int v1[]={4,1,5};
	int v2[]={3,8,9};
	int v3[2];
	c=0;
	j=0;
	for(i=0;i<6;i++){
		if(v1[c]>v2[j] || c>2){
			v3[i]=v2[j];
			j++;
		}else{
			v3[i]=v1[c];
			c++;
		}
	}
	for(i=0;i<5;i++){
		printf("Il risultato:  %d \n", v3[i]);
	}
}
