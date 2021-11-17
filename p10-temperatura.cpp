// Convertir farenheit a centigrados
#include<stdio.h>

main() {
	float farenheit, celcius;
	
	printf("Convertir grados farenheit a grados celcius\n");
	printf("Dame los grados farenheit "); scanf("%f", &farenheit);
	
	celcius = ( farenheit - 32 ) *  5 / 9 ;
	
	printf("Los grados celcius son : %f \n", celcius);
	
}
