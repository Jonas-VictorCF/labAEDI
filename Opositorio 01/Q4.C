#include<stdio.h>
#include <stdlib.h>
 
 int main() {

 int i,num,cont=0;
 for(i=2;i<=100;i++) {
	 for(num=2;num<=i;num++)
	 	if(i%num==0)
	 		cont++;
	 	if(cont==1)
	 		printf("%d-",i);
		 cont=0;
	 
 };
 
}