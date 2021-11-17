// Leer n elemetos en un arreglo, sumarlos y sacar promedio

#include<stdio.h>
#define MAX 100
int main()
{
	int i,n;
	float nums[MAX],s,p;
	s=p=0;
	
	printf("Cuantos valores deseas procesar ? \n");
	scanf("%d", &n);
	
	if(n>MAX) { 
		printf("Fuera de rango");
		return 0;
	}
	
	for(i=0; i<n; i++) {
		printf("nums[%d] = ",i);
		scanf("%f", &nums[i]);
	}
	
	printf("\nLos elementos del arreglo son:\n");
	for(i=0; i<n; i++) {
		printf("nums[%d] = ",i);
		printf("%.2f\n",nums[i]);
		s = s + nums[i];
	}
	p = s / n;
	
	printf("La suma es %.2f \n ", s );
	printf("El promedio es %.2f \n ", p );

}
