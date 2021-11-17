// Imprimir numeros de 3 en 3 hasta n
#include<stdio.h>
main(){
	int n;
	printf("Hasta donde deseas los numeros ? ");
	scanf("%d",&n);
	for(int i=1; i<=n; i+=3) {
		printf("%d ",i);
	}
	
}
