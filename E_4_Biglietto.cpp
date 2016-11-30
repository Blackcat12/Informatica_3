/*
autore= Diego Gattari
classe= 3 IN A
data= 22/11/2016
programma= biglietto mirabilandia
ver: 3.0
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	float euro;//variabile che indica gli euro totali 
	float comp;//variabile che indica il prezzo per l'accompagnatore
	int h;//altezza
	int e ;//età
	float sup;//supplemento
	int dis;//disabile o no
	 printf("inserisci 1 se la persona è disabile senno 0:");
	 scanf("%d",&dis);  
	  if(dis==1){
	  	euro=0;
	  	comp=25.50;
	  	printf("il prezzo del disabile e':%f",euro);                                           //se è disabile calcola anche il suo eventuale accompagnatore
	  	printf("il prezzo dell eventuale accompagnatore e':%f",comp);
	  } else { 
	         printf("altezza?");
	         scanf("%d",&h);
	            if(h<=100){
	            euro=0.00;                                                            //calcolo del prezzo in base all'altezza
	               }else{
	               	 if(h<140  &&  h>100){
	               	 	 euro=28.00;
						}else{
							if(h>140){
								euro=34.90;                                        //prezzo finale senza supplemento
							}
						}
				   }
				                     printf("eta?");
				                      scanf("%d",&e);
				                      if(e>60){                                    //calcolo del prezzo in base alla sua età 
				                      	euro=25.00;
			                        }else{
			                        	if(e<60){
			                        		euro=34.90;
				   }
				}           
				                    	printf("il prezzo totale e':%f",euro);
	         }
	                                 printf("inserisci 1 se la persona vuole il supplemento 0 se non lo vuole ");
									 scanf("%d",&sup);
									   if(sup==1){
									       if(euro==34.90){                                            // chiediamo se il cliente vuole il supplemento e se lo vuole lo andiamo a sommare al prezzo totale 
									  	     euro=euro+9.50;
									           }else{ 
									             if(euro<34.90){
									     	       euro=euro+7.50;
									  }
								 }
							 }   
							             printf("il prezzo totale e':%f",euro);        //prezzo finale con il supplemento
        }
      

