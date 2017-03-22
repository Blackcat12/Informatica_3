#include<stdio.h>
#include<stdlib.h>
int main(){
	int scelta;//se è uguale a 0 esco
	char nome[256];//stringa
	char copia[256];// per inserire la copia della stringa "nome"
	int I;//contatore
	int c;//contatore lunghezza
	int o;//variabile che consente di controllare il carattere per contare la frequenza
	int f;//frequenza
	c=0;
	do{
		printf("\ninserisci il nome(1)\n");//MENU
		printf("\nlunghezza(2)\n ");
		printf("\nfrequenza caratteri(3)\n");
		printf("\nexit(0)\n");
		do{
			printf("\ninserisci la tua scelta\n ");//inserisci la scelta che vuoi far procedere
			scanf("%d",&scelta);
		}while((scelta<0)||(scelta>3));
		switch(scelta){
		case 1:
				printf("\ninserisci il tuo nome con massimo 100  lettere\n ");//input nome
				scanf("%s",nome);
			
			break;
		case 2: //lunghezza nome
			while(nome[c]!='\0'){
				c++;
			}
				printf("\n il nome e' lungo %d caratteri\n",c);
			break;
		case 3://frequenza
		   while (nome[I]!=0){
						copia[I]=nome[I];
						I++;
					}	
					I=0;
					while (copia[I]!=0){
						o=copia[I];
						if (o!='0'){
							c=0;
							f=0;
							while (copia[c]!=0){
								if (copia[c]==o){
									f++;
									copia[c]='0';
								}
								c++;
							}
							printf("Il carattere %c si ripete %d volte\n",o,f);
						}
						I++;
		}
	}
     	}while(scelta!=0);
     	
 }
  


	
	
	

