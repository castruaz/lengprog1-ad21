// Ingreso a la Universidad
// Carlos Castaneda
// 23 Septiembre de 2021
#include<stdio.h>   // printf, scanf
#include<strings.h> // puts y gets
#include<ctype.h>   // toupper
main() {
	char nombre[40];
	char sexo;
	int edad;
	float c1, c2, c3, p;
	
	printf("Universidad Patito SA de CV\n");
	printf("Control de ingreso \n");
	printf("Dame tu nombre ? "); gets(nombre); // lee una cadena
	printf("Sexo (M/F)"); scanf("%c", &sexo);
	
	if( toupper(sexo)=='F' ) { // verifica si es mujer
		printf("Dame tu edad ? "); scanf("%d", &edad);
		if( edad>= 21 ) { // verifica si tiene 21 o mas a#os
			printf("Dame calificacion 1 "); scanf("%f", &c1);
			printf("Dame calificacion 2 "); scanf("%f", &c2);
			printf("Dame calificacion 3 "); scanf("%f", &c3);
			p=(c1+c2+c3)/3;
			if( p>=8 && p<=10 ) { // verifica que tiene un promedio entre 8 y 10
				puts(nombre); // imprime una cadena
				printf("Bienvenida a la universidad Patito SA de CV\n");
			} else
			   printf("No tienes el promedio requerido, lo siento \n");
		} else 
		   printf("Solo aceptamos mayores de edad\n");
	} else 
	   printf("Solo aceptamos mujeres \n");
}
