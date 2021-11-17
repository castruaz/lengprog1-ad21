// Calcular estadisticas con los elementos de un arreglo de numeros
#include<stdio.h>
#include<stdlib.h> // system
#define MAX 50

void LeerArreglo(float nums[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Elemento %d = ", i);
		scanf("%f", &nums[i]);
	}
}

void MostrarArreglo(float nums[], int n) {
	int i;
	for(i=0; i<n; i++) 
		printf("Elemento %d = %.2f\n", i, nums[i]);
}

float Promedio(float nums[], int n) {
	int i;
	float suma=0, prom=0;
	for(i=0; i<n; i++) 
		 suma = suma + nums[i];
	prom = suma / n;
	return prom;
}

float Mayor(float nums[], int n) {
	int i;
	float may = nums[0];
	for(i=1; i<n; i++)
		if(nums[i]>may)
			may = nums[i];
	return may;
}

float Menor(float nums[], int n) {
	int i;
	float men = nums[0];
	for(i=1; i<n; i++)
		if(nums[i]<men)
		men = nums[i];
	return men;
}

int Buscar(float nums[], int n, float nb) {
	int pos = -1, i;
	for(i=0; i<n; i++)
		if(nums[i]==nb)
			pos = i;
	return pos;
}

main() {
	int opcion, n=0, pos;
	float nums[MAX], prom, may, men, nb;
	do {
		system("cls");
		printf("-----------------------------------------------------\n");
		printf("Calcular estadisticas sobre un arreglo de numeros  \n");
		printf("-----------------------------------------------------\n");
		printf("Leer los elementos en el arreglo .............  [ 1 ]\n");
		printf("Mostrar los elementos en el arreglo ........... [ 2 ]\n");
		printf("Calcular promedio de los elementos del arreglo. [ 3 ]\n");
		printf("Calcular elemento mayor y menor del arreglo.... [ 4 ]\n");
		printf("Buscar elemento en el arreglo ................. [ 5 ]\n");
		printf("Salir ..................................... [ 6 ]\n");
		printf("-----------------------------------------------------\n");
		printf("Elije una opcion ? "); scanf("%d", &opcion);
		
		switch(opcion) {
			case 1:	if(n==0) {
						printf("\nLeyendo elementos del arreglo:      \n"); 
						printf("Cuantos elementos tiene el arreglo ? ");scanf("%d", &n);
						LeerArreglo(nums, n);
					} else 
					   printf("\nEl arreglo ya tiene elementos \n");
					break;
			case 2: if(n!=0) {
						printf("\nMostrando los elementos del arreglo:\n"); 
						MostrarArreglo(nums, n);
					} else 
						printf("\nPrimero debes leer los elementos del arreglo\n");
					break;
			case 3: if(n!=0) {
						printf("\nCalculando el promedio de los elementos del arreglo:\n");
						prom = Promedio(nums, n);
						printf("El promedio es %.2f", prom);
					} else 
					   printf("\nPrimero debes leer los elementos del arreglo\n");
					break;
			case 4: if(n!=0) { 
						printf("\nCalculando el elemento mayor y menor del arreglo:\n");
						may = Mayor(nums, n);
						men = Menor(nums, n);
						printf("\nEl mayor es %.2f", may);
						printf("\nEl menor es %.2f", men);
					} else
					   printf("\nPrimero debes leer los elementos del arreglo\n");
					break;
			case 5: if(n!=0) {
						printf("\nBuscando un elemento en el arreglo:\n");
						printf("Que elemento deseas buscar ?"); scanf("%f", &nb);
						pos = Buscar(nums, n, nb);
						if(pos==-1) printf("No lo encontre ...");
						else printf("Encontrado en la posicion %d", pos);
					} else 
					   printf("\nPrimero debes leer los elementos del arreglo\n");
					break;
			case 6: printf("\nSaliendo .... Gracias por utilizar el sistema ....\n");break;
			default: 
				printf("\nElegiste una opcion invalida ");break;
		}
		printf("\n\n<< Presiona una tecla para continuar >>");
		fflush(stdin);getchar();
	} while(opcion!=6);
}
