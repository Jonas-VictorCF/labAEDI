#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* numAleatorio(int N, int minimo, int maximo) {
    int* res = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        res[i] = (rand() % (maximo - minimo)) + minimo;
    }
    return res;
}
int tempo(int* V, int N, void fun(int*, int)) {
    clock_t t = clock();
    fun(V, N);
    t = clock() - t;
    int r = (int)((float)t) * 1000 / CLOCKS_PER_SEC;
    return r;
}
void insertionsort(int* V, int N ){
int i,j,aux;
for(i = 1; i < N; i++){
    aux = V[i];
    for(j = i - 1 ;j >= 0 && V[j] > aux; j--);
    V[j+1]=V[j];
 }
  V[j+1] = aux;
}



void verificarOrdenacao(int *V, int N){
    int i;
    for ( i = 0; i < N-1; i++)
    {
        if(V[i] > V[i+1]){
            printf("N Ordenado");
            return;
        }
    }
    printf("Ordenado");
    
}


int main() {

     int* V = numAleatorio(1000, 1000, 10000);
    int x = tempo(V, 1000,insertionsort);
   
   V = numAleatorio(1000, 1000, 10000);
    x = tempo(V, 1000, insertionsort);
 printf("Tempo (ms): %d\n", x);
verificarOrdenacao(V, 1000);


return(0);

}