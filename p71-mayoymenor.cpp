// Buscar un elemento en el arreglo
// ademas encontrar el mas grande y el mas pequeno
#include<stdio.h>
#define MAX 20
int main() {
	int numeros[MAX];
	int n, i, nb, pos=-1;
	int max , min, suma=0;
	
	printf("Cuantos elementos ?"); scanf("%d", &n);
	if(n>MAX) {
		printf("El maximo de elementos es %d", MAX);
		return 0;
	}
	
	// Capturar los elementos
	printf("Dame los elementos del arreglo \n");
	for(i=0; i<n; i++) {
		printf("Elemento %d ", i+1);
		scanf("%d", &numeros[i]);
	}
	
	// Mostrar los elementos y calcular la suma 
	printf("\nLos elementos del arreglo son \n");
	for(i=0; i<n; i++) {
		printf("%d ", numeros[i]);
		suma = suma + numeros[i];
	}
	printf("\nla suma es %d ", suma);
	
	// buscar el mas grande
	max = numeros[0];
	for(i=1; i<n; i++)
		if(numeros[i]>max)
			max=numeros[i];
	printf("\nEl mayor es %d ", max);
	
	// buscar el mas pequeno
	min = numeros[0];
	for(i=1; i<n; i++)
		if(numeros[i]<min)
		min=numeros[i];
	printf("\nEl menor es %d ", min);
	
	// buscaar elemento en el arreglo	
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
