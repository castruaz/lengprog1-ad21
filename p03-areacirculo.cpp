// Programa que calcula el area de un circulo
// Carlos Castañeda Ramírez
// 23 agosto 2021

#include<stdio.h>
 
main() {
	//Declaracion de variables
	float radio, area=0;
	const float PI=3.1416;
	// Entrada 
	printf("Este programa calcula el radio de un circulo \n");
	printf("-------------------------------------------- \n");
	printf("Dame el radio del circulo = "); 
	scanf("%f",&radio);
	// Proceso
	area = PI * radio * radio;
	// Salida
	printf("\nEl circulo de radio %f tiene un area de %f \n", radio, area);
	printf("\nGracias por utilizar mi programa eres mi fan #1");
	
}
