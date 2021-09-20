// Ejemplo de constantes literales enteras
#include<stdio.h>
main(){
	int base, altura, alto, ancho;
	int largo, profundidad;
	int lado1=10, lado2=20, lado3=30;
	int otra = 0177;
	
	alto  = 0x41f;
	ancho = 0x7e;
	
	printf("Dame la base      = "); scanf("%d", &base);
	printf("Dame la altura    = "); scanf("%d", &altura);
	printf("Dame largo y profundidad separados por espacio ");
	scanf("%d %d", &largo, &profundidad);
	printf("La base  %d y la altura      %d \n", base, altura);
	printf("El largo %d y la profundidad %d \n", largo, profundidad);
	printf("Lado 1 = %d , Lado 2 = %d, Lado 3 = %d\n", lado1, lado2, lado3);
	
	printf("Alto %x , Ancho %x \n", alto, ancho);
	printf("Alto %d , Ancho %d \n", alto, ancho);
	printf("Alto %c , Ancho %c \n", alto, ancho);
	
	printf("La otra variable %o \n", otra);
	printf("La otra variable %d \n", otra);
	printf("La otra variable %c \n", otra);
	
	 
	
}
