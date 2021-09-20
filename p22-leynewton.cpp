// Calcula la segunda ley de newton
#include<stdio.h>
main() {
	float f,m,a;
	int op;
	printf("Calculando la segunda Ley de Newton\n");
	printf(" [ 1 ] fuerza      (f = m * a)  \n");
	printf(" [ 2 ] masa        (m  = f / a) \n");
	printf(" [ 3 ] aceleracion (a = f / m)  \n");
	printf("Elije una opcion ? "); scanf("%d",&op);
	
	if(op==1) {
		printf("Calculando la fuerza \n");
		printf("Dame la masa: "); scanf("%f",&m);
		printf("Dame la aceleracion: "); scanf("%f",&a);
		f = m * a;
		printf("La fuerza es %f ", f);
	} else 
		if(op==2) {
			printf("Calculando la masa \n");
			printf("Dame la fuerza: "); scanf("%f",&f);
			printf("Dame la aceleracion: "); scanf("%f",&a);
			m = f / a;
			printf("La masa es %f ", m);
		} else 
			if(op==3) {
				printf("Calculando la aceleracion \n");
				printf("Dame la fuerza: "); scanf("%f",&f);
				printf("Dame la masa  : "); scanf("%f",&m);
				a = f / m;
				printf("La aceleracion es %f ", a);
			} else
				printf("Opcion Invalida\n");
	
	   printf("Programa terminado ");
	
}
