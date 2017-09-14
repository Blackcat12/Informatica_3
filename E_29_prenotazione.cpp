#include<stdio.h>
#include<stdlib.h>
/*
Programma:Ordinamento di un array tramite il metodo ad inserimento(insertion-sort)
AUTORE:Diego Gattari
Data:14/05/2017
Classe: 3 Informatica A
Versione:1.3 */
int menu(){
    int scelta;
	  do{
	  	 printf("\n\n\n             SCELTE                  \n\n\n");
	  	 printf("\n inserimento dei vettori<1>\n");
	  	 printf("\n ordinamento vettore<2>\n");
	  	 printf("\n cerca un numero nel vettore<3>\n");
	  	 printf("\n stampa del vettore<4> \n");
	  	 printf("\n fusione del vettore<5>");
	  	 printf("\n scelta 0 exit\n");
	  	   do{
	  	   	  printf ("\n\ninserisci la tua scelta\n\n");
	  	   	  scanf  ("%d",& scelta);
		    }while((scelta<0)||(scelta>5));
	    }while(scelta<0);  
		    return(scelta);   
    }
    int input_vettore(int v[],int n,int v1[],int l2){
    	int i;
    	printf("\n\nINSERISCI IL PRIMO VETTORE\n\n");
    	for(i=0;i<n;i++){
    		scanf("%d",& v[i]);
		}
		printf("\n\nINSERISCI IL SECONDO VETTORE\n\n");
    	for(i=0;i<l2;i++){
    		scanf("%d",& v1[i]);
		}
    	   
	}
	void insertsort_v2(int v[],int v1[],int n,int l2){
		int i;
		int dove;
		int valore;
		int x;
		for(i=1;i<n;i++){
			dove=0;
			valore=v[i];
			while(valore>v[dove] && dove<i) dove++;
			for(x=i-1;x>=dove;x--){
				v[x+1]=v[x];
			}
			   v[dove]=valore;
		}
		for(i=1;i<l2;i++){
			dove=0;
			valore=v1[i];
			while(valore>v1[dove] && dove<i) dove++;
			for(x=i-1;x>=dove;x--){
				v1[x+1]=v1[x];
			}
			   v[dove]=valore;
		}
	}
	void ricerca(int v[],int n){
		int i;
		int n_t;
		int trovato;
		trovato=1;
		i=0;
		printf("inserisci il numero che vuoi trovare\n\n");
		scanf("%d",& n_t);
		while((i<n) && (trovato==1)){
			if(v[i]==n_t){
				trovato=0;
			}
			i++;	
		}
		if(trovato==0){
			printf("il numero che hai inserito si trova nella posizione %d",i);
		}else{
			printf("il numero che hai inserito non si trova nell'array");
		}
	}
	void stampa(int v[],int n){
		int i;
		printf("\n\nstampa dell'array\n\n");
		printf("\n");
		for(i=0;i<n;i++){
			printf("%d",v[i]);
		}
	}
	int  marge(int v[],int v1[],int l1,int l2,int m[]){
		int i1;
	    int i2;
	    int i3;
	    int i;
	    int itot;
	    itot=l1+l2;
	    i1=0;
	    i2=0;
	    i3=0;
	    
	    while(i1<l1 && i2<l2){
	    	if(v[i1]<v1[i2]){
	    		m[i3]=v[i1];
	    		i1++;
	    		i3++;
			}else{
				m[i3]=v1[i2];
				i2++;
				i3++;
			}
			i3++;
		}
		if(i1==l1){
			while(i2<l2){
			  m[i3]=v[i2];
			  i2++;
			  i3++;
			}
		}else{
			while(i1<l1){
				m[i3]=v[i1];
				i1++;
				i3++;
			}
		}
		return itot;
	
	}
	int main(){
		int v[20];
		int v1[20];
		int m[40];
		int n;
		int scelta;
		int l2;
		int itot;
		int i;
	    printf("\n\ninserisci il numero di elementi del secondo array\n\n");
    	scanf("%d",& l2);
		printf("\n\ninserisci il numero di elementi dell'array\n\n");
    	scanf("%d",& n);
    	
    do{
    	scelta=menu();
    	switch(scelta){
    		case 1:
    			 input_vettore(v,n,v1,l2);
    			 break;
    			 
    		case 2:
    			 insertsort_v2(v,v1,n,l2);
    			 break;
    		case 3:
    			 ricerca(v,n);
    			 break;
    		case 4:
			     stampa(v,n);
				 break;	
		    case 5:
			     itot=marge(v,v1,n,l2,m);
			     	printf("l'array che contiene la fusione e' formato da:\n\n");
		           for(i=0;i<itot;i++){
		              printf(" %d ",& m[i]);
	                }
				 break; 	 
		    }
	   }while(scelta!=0);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
