// Calcular la paga extra de un trabajador
#include<stdio.h>
#include<string.h>
main() {
	char nombre[40];
	int horas, extra;
	float paga, total;
	
	printf("Calculo del pago de un trabajador, hora extra se pagan al doble\n");
	printf("Dame tu nombre   : "); gets(nombre);
	printf("Horas trabajadas : "); scanf("%d", &horas);
	printf("Paga por hora    : "); scanf("%f", &paga);
	
	if( horas <= 40 ) {
		total = horas * paga;
	} else {
		extra = horas - 40;
		total = ( 40 * paga ) + ( extra * (paga * 2) );
	}
	printf("El trabajador "); puts(nombre);
	printf("\nTubo un pago total de pago %f", total);
}
