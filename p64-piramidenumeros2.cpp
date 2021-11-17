// Piramide de numeros v2
#include<stdio.h>
main() {
	int i,j, n;
	printf("Cuantos reglones ?");scanf("%d",&n);
	for(i=1; i<=n; i++) {
		for(j=1; j<=i; j++) {
			printf("%2d ",j);
		}
		printf("\n");
	}
	
}
