#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int* numAleatorio(int n, int minimo, int maximo) {
    int i;
    int* V = (int*)malloc(n * sizeof(int));
    for ( i = 0; i < n; i++) {
        V[i] = (rand() % (maximo - minimo)) + minimo;
    }
    return V;
}
int tempo(int* V, int N, void fun(int*, int)) {
    clock_t t = clock();
    fun(V, N);
    t = clock() - t;
    int r = (int)((float)t) * 1000 / CLOCKS_PER_SEC;
    return r;
}

void novaFun(int *V, int n){
//Encapsulamento da função quicksort:
quicksort(V, 0, n);
}

  void quicksort(int *V,int inicio, int fim){
      
      int pivo;
     if(fim > inicio){
      pivo = patriciona(V,inicio,fim);
      quicksort(V,inicio,pivo-1);
      quicksort(V,pivo+1,fim);
     }

  }
  int patriciona(int *V,int inicio, int fim){
   int esq,dir,pivo,aux;
   esq = inicio;
   dir = fim;
   pivo = V[inicio];
  
   while(esq < dir){
       while (V[esq] <= pivo)
       esq++;
       while (V[dir] > pivo)
       dir--;
       if(esq < dir){
           aux = V[esq];
           V[esq] = V[dir];
           V[dir] = aux;
       }
       
   }
   V[inicio] = V[dir];
   V[dir] = pivo;
   return dir;
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

printf("\n");

     int* V = numAleatorio(1000, 1000, 10000);
    int x = tempo(V, 1000, novaFun);
    printf("Tempo (ms): %d\n", x); 
    verificarOrdenacao(V, 1000);

  for (int i = 0; i < 100; i++)
  {
    int x = 100 * i;
     numAleatorio(x, 1000, 10000);
    tempo(V, x, novaFun);
       printf("Tempo (ms): %d\n", x); 
        verificarOrdenacao(V, x);
    
  }

    return(0);
}