// Ejemplo de constantes definidas y constntes declaradas

#include<stdio.h>

#define MENSAJE "Hola que tal ya casi es viernes"
#define PI 3.1416
#define IVA 0.16

main() {
	const float FACTOR = 35.4511;
	const int INCREMENTO = 12;
	const char ERROR[]="SE TERMINO EL ESPACIO EN DISCO";
	
	printf("El saludo es        = %s \n", MENSAJE);
	printf("El valor de PI es   = %f \n", PI);
	printf("El valor del IVA es = %f \n", IVA);
	
	printf("El valor de factor es     = %f \n", FACTOR);
	printf("El valor de incremento es = %d \n", INCREMENTO);
	printf("El valor de ERROR es      = %s \n", ERROR);
	
}
