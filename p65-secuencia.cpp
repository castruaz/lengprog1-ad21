// Piramide de numeros v2
#include<stdio.h>
main() {
	int n;
	float i; 
	float s=0;
	printf("Cuantos terminos ?");scanf("%d",&n);
	for(i=1; i<=n; i++) {
		printf("1/%.0f + ",i);
		s += 1/i;
	}
	printf("\nSuma = %f \n",s);
	
}
