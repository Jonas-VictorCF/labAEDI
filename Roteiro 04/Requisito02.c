#include <stdio.h>
#include <stdlib.h>


int  main () {

    FILE *arquivo = fopen ("agenda.dat","r" );
	
     if (arquivo == NULL) {
	
	puts ( "Arquivo não pode ser aberto " );
	exit ( 1 );
    }
   char nome[80];
   long long int telefone;
do{
		fscanf(arquivo,"%s %lld ", nome, &telefone);
    printf("Nome: %s\n",nome);
    printf("Telefone: %lld\n",telefone);
 }while(!feof(arquivo));
  
	fclose(arquivo);
		
	
	
   return ( 0 );
}