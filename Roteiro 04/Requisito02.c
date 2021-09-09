#include <stdio.h>
#include <stdlib.h>

int  main () {
	
    FILE *arquivo = fopen ( "agenda.dat" , "r" );
	
     if (arquivo == NULL ) {
	
	puts ( " Arquivo não pode ser aberto " );
	exit ( 1 );
	  
    }

   char nome[80];
   long long int telefone;
   int k = 0 ;
    do {
		fscanf (arquivo, "%s%lld" ,nome,&telefone);
    k = k+ 1;
    
    if ((k % 4) == 2){
		printf("Nome: %s\n Telefone:%lld\n ",nome,telefone);
    }
		
	} while (! feof (arquivo));
  
	fclose (arquivo);
		

	
   return ( 0 );
}