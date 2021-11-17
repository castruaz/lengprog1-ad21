// Verificar el numero mayor de tres numeros
// n1  n2 n3   n1 n2 n3    n1 n2 n3    n1 n2 n3
// 10 11 12    9  5  6     7  7  7     10 10 5
#include<stdio.h>
main() {
	int n1, n2, n3;
	
	printf("Verificando cual es el mayor de tres numeros \n");
	printf("Numero 1 ? ");scanf("%d",&n1);
	printf("Numero 2 ? ");scanf("%d",&n2);
	printf("Numero 3 ? ");scanf("%d",&n3);
	
	if( n1>n2 && n1>n3 )
		printf("El mayor es %d \n", n1);
	
	if( n2>n1 && n2>n3 )
		printf("El mayor es %d \n", n2);
	
	if( n3>n1 && n3>n2 )
		printf("El mayor es %d \n", n3);
	 
}
