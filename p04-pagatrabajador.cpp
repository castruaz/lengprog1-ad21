// Calcular la paga de un trabajador
// Carlos Castaneda
// 24 Ago 2021

#include <stdio.h>

main() {
	int horas;
	float paga;
	const float TASA=0.3;
	float pagabruta, impuesto, paganeta;
	// Entrada
	printf("Calculando la paga de un trabajador \n");
	printf("Dame las horas ? "); scanf("%d", &horas);
	printf("Dame la paga   ? "); scanf("%f", &paga);
	// Proceso
	pagabruta = horas * paga;
	impuesto  = pagabruta * TASA;
	paganeta  = pagabruta - impuesto;
	// Salida
	printf("Trabajo      %d\n", horas);
	printf("La paga fue  %.2f\n", paga);
	printf("Paga Bruta   %.2f\n", pagabruta);
	printf("Impuesto     %.2f\n", impuesto);
	printf("Paga Neta    %.2f\n", paganeta);
	
	printf("\nGracias por utilizar nuestro programa\n");
	
}
