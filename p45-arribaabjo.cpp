// Imprime numeros del 1 al 100 o del 100 al 1 segun elija el usuario
#include<stdio.h>
main() {
	int i,n;
	
	printf("Cual es el tope ");scanf("%d",&n);
	// de 1 a n
	for(i=1; i<=n; i++) {
		printf("%d ",i);
	}
	printf("\n\n");
	// n a 1
	for(i=n; i>=1; i--) {
		printf("%d ",i);
	}
	
}
