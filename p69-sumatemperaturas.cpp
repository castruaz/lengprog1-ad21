// Suma de temperaturas
#include<stdio.h>
main() {
	float temps[] = {2.34,4.56,7.89,0.5,2.5,4.67,40.3,22.35,56.22};
	float suma=0;
	int i ;
	// Mostrar los valores
	for(i=0; i<9; i++) {
		printf("%.2f ", temps[i]);
		suma = suma + temps[i];
	}
	printf("\nLa suma es %f ", suma);
	
}
