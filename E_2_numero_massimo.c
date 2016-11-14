#include <stdio.h>
#include <stdlib.h>
/*Diego Gattari 3 INA 14/11/2016 */
int main(int argc, char *argv[])
{
  int N1;//è la variabile del primo numero
  int N2;//è la variabile del secondo numero
  int N3;//è la variabile del terzo numero 
  int Max;//é il numero maggiore
  printf("\n inserisci il primo numero\n");
  printf("\n inserisci il secondo numero\n");
  printf("\n inserisci il terzo numero\n");
  scanf("%d",& N1);
  scanf("%d",& N2);
  scanf("%d",& N3);
    if(N1>N2){
              Max=N1;
    } else {
              Max=N2;
    }
    
    if (N3>Max){
                
           Max=N3;
    }
    printf("\n il numero maggiore e':  %d",Max);
     
    
  
   
  system("PAUSE");	
  
}
