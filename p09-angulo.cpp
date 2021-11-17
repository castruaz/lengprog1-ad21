// Calcular angulo
#include<stdio.h>
 

main() {
	int angulo1, angulo2, angulo3;
	
	printf("Calculando el tercer angulo dados los dos primeros en un triangulo\n");
	printf("Dame angulo 1 "); scanf("%d", &angulo1);
	printf("Dame angulo 2 "); scanf("%d", &angulo2);
	
	angulo3 = 180 - ( angulo1 + angulo2 );
	
	printf("El tercer angulo es %d ", angulo3);
	
}
