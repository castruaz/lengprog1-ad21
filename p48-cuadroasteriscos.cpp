// Piramide de astericos
#include<stdio.h>
main() {
	int i,j, r, c; 
	char car;
	printf("Cuantos reglones ?");scanf("%d",&r);
	printf("Cuantas columnas ?");scanf("%d",&c); fflush(stdin);
	printf("De que caracter ?");scanf("%c",&car);
	
	for(i=1; i<=r; i++) {
		for(j=1; j<=c; j++) {
			printf("%c",car);
		}
		printf("\n");
	}
	
}
