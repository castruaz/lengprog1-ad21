// Calcular dias, minutos, segundos das las horas

#include<stdio.h>

main() {
	float horas, dias, minutos, segundos;
	
	printf("Calculando dias, minutos, segundos en base las horas\n");
	printf("Dame las horas "); scanf("%f", &horas);
	
	dias = horas / 24 ;
	minutos = horas * 60 ;
	segundos = minutos * 60;
	
	printf("Los dias son     : %f \n", dias);
	printf("Los minutos son  : %f \n", minutos);
	printf("Los segundos son : %f \n", segundos);
}
