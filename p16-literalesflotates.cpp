// Ejemplo de literales flotantes
// Carlos Hector C
#include<stdio.h>
main() {
	float superficie;
	float tasa, impuesto; 
	float descuento=0.40, ret=1234.567;
	double direccion, potencia;
	
	superficie = .34567;
	potencia   = 1234.34E10;
	direccion  = 0.345;
	
	printf("Dame la tasa  ="); scanf("%f", &tasa);
	printf("Dame impuesto ="); scanf("%f", &impuesto);
	
	printf("\nTasa %.2f \nImpuesto %.2f \n",tasa, impuesto);
	printf("Superficie = %f \n", superficie);
	printf("Potencia   = %.2ef \n", potencia);
	printf("Direccion  = %f \n", direccion);
	printf("\nDescuento %.2f \nRet %.2f \n",descuento, ret);
	
	
	
	
	
}
