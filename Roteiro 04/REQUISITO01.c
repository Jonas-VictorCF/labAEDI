#include <stdio.h>
#include <stdlib.h>


int main(){
	

    FILE *arq = fopen("agenda.dat", "r");
	
     if(arq == NULL){
	
	puts("Arquivo nao pode ser aberto");
	exit(1);
	  
    }
    
    char c;
    do {
		c = getc(arq);
		printf("%c", c);
		
		
	}  while(c!= EOF);
	fclose(arq);
		
	
	
	
   return(0);
}