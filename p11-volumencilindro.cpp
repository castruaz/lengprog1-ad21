// Calcular volumen de un clilindro

#include<stdio.h>

main() {
	float radio, altura, volumen;
	const float PI = 3.1416;
	
	printf("Calculando el volumen de un cilindro \n");
	printf("Dame el radio "); scanf("%f", &radio);
	printf("Dame la altura "); scanf("%f", &altura);
	
	volumen = PI * ( radio * radio ) * altura ;
	
	printf("El volumen es %f\n", volumen);
	
}
