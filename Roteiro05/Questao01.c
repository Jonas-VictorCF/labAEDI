#include <stdio.h>


int* numAleatorio(int n[5], int minimo, int maximo);

int main() {
    int n[5] = {8,27,37,42,59};
    int maximo, minimo;


    maximo = numAleatorio(n,minimo,maximo);

    printf("\nMaior valor: %i  ", maximo);
   printf("\nMenor valor: %i -", minimo);

    return 0;
}

int* numAleatorio(int n[5], int minimo, int maximo){

 maximo  = n[0];
        for (int i = 1; i < 5; i++) {
            if (n[i] > maximo) {
                maximo  = n[i];
                
            }
        }
minimo   = n[0];
    for (int i = 1; i < 5; i++) {
        if (n[i] < minimo) {
            minimo  = n[i];       
        }
    }
        
    return(maximo);
}