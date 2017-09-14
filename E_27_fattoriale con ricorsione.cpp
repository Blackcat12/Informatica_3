#include <stdio.h>	
int f (int n) {	//funzione per il calcolo del fattoriale
	if(n>1){
		return n*f(n-1);
	}else{
		return 1;
	}	
}

int main() {
	int n;	//numero 
    int r;	//fattoriale
	do{
 		printf ("Inserisci il numero ");
 		scanf("%d",&n);
	}while (n<0);
	r=f(n);
	printf("Il fattoriale  %d",r);
}
