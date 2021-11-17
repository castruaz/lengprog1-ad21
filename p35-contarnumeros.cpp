// Introducir n numeros, contarlos, suma pos, suma neg

#include<stdio.h>
main() {
	int n=0,c=0,s=0, cp=0, cn=0, cz=0;
	printf("Programa que cuenta y suma numeros\n");
	
	do {
		printf("Dame un numero ? ");
		scanf("%d",&n);
		if(n!=999) {
			c++;   // contar
			s+=n; // acomular o sumar
			if(n>0)  cp++; 
			if(n<0)  cn++;
			if(n==0) cz++;
		}
	} while(n!=999);
	
	printf("Numero introducidos %d\n", c);
	printf("La suma de los numeros es %d\n", s);
	printf("Positivos %d\n", cp);
	printf("Negativos %d\n", cn);
	printf("Ceros     %d\n", cz);
}
