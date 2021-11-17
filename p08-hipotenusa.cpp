// Calcular hipotenus

#include<stdio.h>
#include<math.h>

main() {
	int longlado1, longlado2;
	float hipotenusa;
	
	printf("Calculando la hipotenusa de un trianglo \n");
	printf("Longitud del lado 1 "); scanf("%d", &longlado1);
	printf("Longitud del lado 2 "); scanf("%d", &longlado2);
	
	hipotenusa = sqrt(longlado1*longlado1 + longlado2*longlado2);
	
	printf("La hipotenusa del triangulo es %f \n", hipotenusa);
	
}

