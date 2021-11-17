// Imprimir la suma de los numeros pares de 2 a n
#include<stdio.h>
main(){
	int n, suma=0;
	printf("Hasta donde deseas los numeros ? ");
	scanf("%d",&n);
	for(int i=2; i<=n; i+=2) {
		printf("%d ",i);
		suma += i;
	}
	printf("\nLA suma es %d",suma);
	
}
