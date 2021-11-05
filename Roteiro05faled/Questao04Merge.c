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
mergesort(V, 0, n);
}

void mergesort(int* V, int inicio, int fim){
int meio;
if(inicio < fim)
         {
    meio = floor ((inicio + fim )/2);
    mergesort(V,inicio,meio);
    mergesort(V,meio + 1 , fim);
    merge(V,inicio,meio,fim);

      }
    }

void merge(int *V , int inicio,int meio,int fim){
int *temp, p1,p2,tamanho, i , j, k;
int fim1 = 0,fim2 =0;
tamanho = fim - inicio + 1;
p1 = inicio;
p2 = meio + 1;
temp = (int*)malloc(tamanho*sizeof(int));
if(temp != NULL){
    for(i=0;i<tamanho;i++){
        if(!fim1 && !fim2){
            if(V[p1] < V[p2])
               temp[i] = V[p1++];
    else
       temp[i] = V[p2++];

       if(p1>meio) fim1 = 1;
       if(p2>fim) fim2 = 1;
        }else{
            if(!fim1)
      temp[i]=V[p1++];
        else
        temp[i]=V[p2++];

        }
        }
        for(j=0, k=inicio; j<tamanho; j++, k++)
        V[k] = temp[j];
      }
      free(temp);
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
int i;
   int* V ;
    int x;


  for (i = 0; i <= 100; i++){
	  x = 100 * i;
	V = numAleatorio(x,1000,10000);
	  tempo(V,x,novaFun);
	printf("Tempo (ms): %d\n",x);
verificarOrdenacao(V, x);
	
}
    return(0);
}