#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;//numero da trovare
	int min;//variabile che indica l'indice minore
	int cont;//variabile che conta i cicli svolti
	int max;//variabile che indica l'indice maggiore
	int trovato;// indica se il numero è stato trovato
	int cent;// centro
	int num[10]={8,10,14,16,20,25,31,37,40,50};
	printf("inserisci il numero da trovare:\n\n");  // input numero da trovare
	scanf("%d", & n);
	min=0;
	max=9;
	trovato=0;
	while((trovato==0)&&(min<=max)){  //ciclo che permette di controllare se il numero è presente nell'array
		cent=(min+max)/2;
		if(n==num[cent]){
			trovato=1;
			cont++;	
		}else{
			if(n>num[cent]){
				min=cent+1;
				cont++;
			}else{
				max=cent-1;
				cont++;
			}
		}
		printf("\nil centro e' %d\n", cent);
	}
	if(trovato==1){
		printf("\nil numero e' presente nell'array nella seguente posizione %d\n", cent);  //output se il numero è nell'array
		printf("\nil numero è stato trovato in %d passaggi\n",cont);
	}else{
		printf("il numero non e' stato trovato nell'array");//output se il numero non è nell'array
	}
	

}
