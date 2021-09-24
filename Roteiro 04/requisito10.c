#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *novo, *arquivo;
    novo=fopen("arquivo.novo","w");
    arquivo =fopen("agenda.dat" ,"r");
    if (novo==NULL || arquivo==NULL){
        printf("Erro de abertura\n");
        system("pause");
        exit(1);
    }
    
    char letra; 
   int x,id;
  printf("digite o id a ser apagado: ");
            fflush(stdin);
            scanf("%d",&x);


    while( (letra = fgetc(arquivo)) != EOF )
    {
       if(x != id){
        fprintf(novo, "%c", letra);
        }
    }
    fclose(arquivo);
    fclose(novo);
    remove("agenda.dat");
    rename("arquivo.novo","agenda.dat");
 printf("\nExclusao Concluida Com Sucesso !\n\n");
    return 0;
}