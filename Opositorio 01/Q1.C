#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,contagem,x,cont=0;
	
	 scanf("%d", &x);
	for(i= 0; i < x; i++){
	    scanf("%d", &contagem);
		cont += contagem;
	}
	
	printf("A media e: %.2f\n", ((float)cont/(float)x));
	
	


	
	
	return(0);
}