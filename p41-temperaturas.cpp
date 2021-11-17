// Listado de temperaturas
#include<stdio.h>
main() {
	float ini, fin,c, t ;
	printf("Tabla de temperaturas centigrados - farenheit\n");
	printf("Inicial ? "); scanf("%f",&ini);
	printf("Final   ? "); scanf("%f",&fin);
	c = ini;
	printf("\nCentigrados  Farenheit\n");
	while( c <= fin ) {
		t = (c - 32) * 5/9;
		printf("%.2f          %.2f\n", c,t);
		c++;
	}
}
