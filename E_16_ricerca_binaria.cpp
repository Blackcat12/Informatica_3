#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int min;
	int max;
	int trovato;
	int cent;
	int num[10]={8,10,14,16,20,25,31,37,40,50};
	printf("inserisci il numero da trovare:\n\n");
	scanf("%d", & n);
	min=0;
	max=9;
	trovato=0;
	while((trovato==0)&&(min<=max)){
		cent=(min+max)/2;
		if(n==num[cent]){
			trovato=1;	
		}else{
			if(n>num[cent]){
				min=cent+1;
			}else{
				max=cent-1;
			}
		}
	}
	if(trovato==1){
		printf("il numero e' presente nell'array");
	}else{
		printf("il numero non e' stato trovato nell'array");
	}
	

}
