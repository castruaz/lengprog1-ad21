// Imprimir numeros en un rango especificado, ademas su suma
#include<stdio.h>
main(){
	int ini, fin, suma=0;
	printf("Dame inicio ? ");scanf("%d",&ini);
	printf("Dame fin    ? ");scanf("%d",&fin);
	
	for(int i=ini; i<=fin; i++) {
		printf("%d ",i);
		suma += i;
	}
	printf("\nHay %d numeros\n", (fin-ini)+1  );
	printf("La suma es %d\n",suma);
	
}
