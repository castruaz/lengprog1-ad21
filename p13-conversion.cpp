// Convertir pesos a dolares

#include<stdio.h>

main() {
	float pesos, dolares;
	const float TC = 20.25;
	
	printf("Convirtiendo pesos a dolares \n");
	printf("Dame la cantidad en pesos ? "); scanf("%f", &pesos);
	
	dolares = pesos / TC ;
	
	printf("Los dolares son : %f\n", dolares);
}
