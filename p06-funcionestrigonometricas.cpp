// Calcular funciones trigonometricas de un angulo en radianes                                                                                                                                              
// Carlos Castaneda
// 24 Ago 2021

#include <stdio.h>
#include <math.h>

main() {
	float angulo;
	float seno, coseno, tangente, logaritmo;
	
	printf("Calculando las funciones trigonometricas de un angulo en radianes\n");
	printf("Dame el angulo en radianes ? "); scanf("%f", &angulo);
	
	seno = sin(angulo);	
	coseno = cos(angulo); 
	tangente = tan(angulo); 
	logaritmo = log(angulo);
	
	printf("Para el angulo %f tenemos \n", angulo);
	printf("Seno      = %.3f\n", seno);
	printf("Coseno    = %.3f\n", coseno);
	printf("Tangente  = %.3f\n", tangente);
	printf("Logaritmo = %.3f\n", logaritmo);
	
	printf("\n Gracias , ya nos vamos\n");
	
}
