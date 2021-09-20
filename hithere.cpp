#include<stdio.h>
main() {
	char nombre[40], domicilio[40];
	int edad;
	float peso;
	printf("Dame tu edad   ");scanf("%d", &edad);
	printf("Dame tu nombre ");scanf(" %[^\n]s", nombre);
	printf("Dame tu peso   ");scanf("%f", &peso);
	printf("Domicilio      ");scanf(" %[^\n]s", domicilio);
	

	printf("Estimado %s \n", nombre);
	printf("Tu edad es %d y tu peso es %f \n", edad, peso);
	printf("Tu domicilio es %s \n", domicilio);
}
