// Imprimir el factorial de un numero
#include<stdio.h>
main(){
	float fac=1;
	int n;
	printf("De que numero deseas su factorial ? ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		printf("%d*",i);
		fac *= i;
	}
	printf("\nEl factorial %f", fac);
	
}
