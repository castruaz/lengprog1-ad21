// Muestra las estaciones del a#o en base a un numero
#include<stdio.h>
main() {
	int n;
	printf("Dame un numero entre 1 y 4 y te dire la estacio del a#0\n");
	printf("Numero ?"); scanf("%d", &n);
	if( n>=1 && n<=4 ) {
		if( n == 1 )
			printf("Primavera\n");
		if( n == 2 )
			printf("Verano \n");
		if( n == 3 )
			printf("Oto#no\n");
		if( n == 4 )
			printf("Invierno\n");
	} else 
	   printf("Numero fuera de rango \n");
	
}
