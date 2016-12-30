
#include <stdio.h>
#include <stdlib.h>

 main() {
int n;
int tab;
int i;
i=1;
tab=0;
        
do{                            // verifico se il numero è compreso tra 2 e 10
    printf("\n inserire un numero compreso tra 2 e 10");
    scanf("%d",& n);
   }while((n<2)||(n>10));
        while(i<=10){                   // stampo tutta la tabellina
           tab=tab+n;
            printf("%d",tab);
              i++;
   }
}
