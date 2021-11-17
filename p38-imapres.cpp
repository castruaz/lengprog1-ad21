// imprimir numeros impares de 1 a n y su suma
#include<stdio.h>
main() {
	int n,c,s=0;
	printf("Imprimiendo numeors impares de 1 a n y su suma\n");
	printf("Hasta donde los deseas ? \n"); scanf("%d",&n);
	c=1;
	while( c<=n ) {
		printf("%d ", c);
		s += c;
		c += 2;
	}
	printf("\nLa suma es %d", s);
		
}
