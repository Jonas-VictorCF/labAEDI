#include <stdio.h>
#include <stdlib.h>


int  main () {

    FILE *arquivo = fopen ( "agenda.dat" , "r" );
	
     if (arquivo == NULL ) {
	
	puts ( " Arquivo não pode ser aberto " );
	exit ( 1 );
    }
   char nome[80];
   int telefone;
do{
		fscanf("%s %i", nome,&telefone);
    printf("\nNome: %s\n",nome);
    printf("\nProfissao: %i\n",telefone);
 }while(!feof(arquivo));
  
	fclose(arquivo);
		
	
	
   return ( 0 );
}