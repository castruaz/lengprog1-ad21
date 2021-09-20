// verifica si un numero es pos, neg, o cero
#include<stdio.h>
main(){
	int n;
	printf("Verificando si un numero es positivo neagativo o cero\n");
	printf("Dame un numero ? ");
	scanf("%d", &n);
	
	if(n>0) printf("El numero es positivo ");
	if(n<0) printf("El numero es negativo ");
	if(n==0) printf("El numero es 0");
	
	
}
