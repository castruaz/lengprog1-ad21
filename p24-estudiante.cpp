// Admision de estudiante en base a su edad y calificaciones
#include<stdio.h>
#include<string.h>
main() {
	char nombre[40];
	int edad;
	float c1, c2;
	
	printf("Universidad Patito SA de CV\n");
	printf("Control de admision a la carrera de computacion\n");
	printf("Solo aceptamos mayores de 18 y con calficaciones mayores a 8\n");
	printf("Dame tu nombre ?"); gets(nombre);
	printf("Dame tu edad   ?"); scanf("%d", &edad);
	if( edad > 18 ) {
		printf("Dame calificacion 1: "); scanf("%f", &c1);
		printf("Dame calificacion 2: "); scanf("%f", &c2);
		if( c1>=8 && c2>=8 ) {
			printf("El estudiante ");puts(nombre);
			printf("HA SIDO ACEPTADO dado que cumple todos los requicitos\n");
		} else
		   printf("No tienes las calificaciones adecuadas para ingresar");
	} else 
	   printf("No tienes la edad suficiente para ingresar\n");

	printf("\n\nGracias por utilizar este programa");
}
