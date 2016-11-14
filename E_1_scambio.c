#include <stdio.h>
#include <stdlib.h>
 
 /*Diego Gattari 3 INA 14/11/2016*/

int main()  
 {
  int A;//variabile usata per contenere il primo numero
  int B;//variabile per contenere il secondo numero 
  int C;//variabile che serve per assegnare B nello swap
    printf("\n inserisci  primo valore ");
    scanf("%d", &B);  
    printf("\n inserisci  primo valore ");
    scanf("%d", &A);
    C=B; //assegno la variabile B a C
    B=A; //assegno la bariabile B a A
    A=C; //assegno  la variabile A a C 
    printf("\n i due valori ora sono:%d  %d",A,B);
    system("PAUSE");	
     
}
