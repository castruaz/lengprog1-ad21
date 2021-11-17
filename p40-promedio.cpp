// calcule la suma y promedio de n nuemeros
#include<stdio.h>
#include<ctype.h> // toupper
main() {
	int c, n, s, p;
	char op;
	
	c = n = s = p = 0;
	do {
		
		printf("Calculando la suma y el promedio de n numeros\n");
		do {
			printf("Dame un numero ? "); scanf("%d",&n);
			if(n!=0) {
				c++;  // contar
				s+=n; // sumar o acomular ( s = s + n )
			}
		} while(n!=0);
		p = s / c;
		printf("Se introdujeron %d numeros \n", c);
		printf("La suma es %d \n", s);
		printf("El promedio es %d \n", p);
		printf("\nDeseas repetir (S/N)"); 
		fflush(stdin);  
		scanf("%c",&op);
		
	} while(toupper(op)!='N');
	printf("\nGracias por utilizar este programa\n");
}
