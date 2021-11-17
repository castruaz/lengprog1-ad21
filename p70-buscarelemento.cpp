// Buscar un elemento en el arreglo

#include<stdio.h>
#define MAX 20
int main() {
	int numeros[MAX];
	int n, i, nb, pos=-1;
	printf("Cuantos elementos ?"); scanf("%d", &n);
	if(n>MAX) {
		printf("El maximo de elementos es %d", MAX);
		return 0;
	}
	printf("Dame los elementos del arreglo \n");
	for(i=0; i<n; i++) {
		printf("Elemento %d ", i+1);
		scanf("%d", &numeros[i]);
	}
	printf("\nLos elementos del arreglo son \n");
	for(i=0; i<n; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\nDame el elemento que quieres buscar > ");scanf("%d", &nb);
	for(i=0; i<n; i++) {
		if(numeros[i]==nb)
			pos=i;
	}
	if(pos==-1) {
		printf("\nElemento no encontrado");
	} else {
		printf("\nElemento encontrado en la posicion %d", pos);
	}
	
}
