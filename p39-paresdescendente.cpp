// numeros pares desscendente desde n hasta 1
#include<stdio.h>
#include<ctype.h> // toupper
main() {
	int c, n;
	char op;
	do {
		printf("Numeros pares descendete \n");
		printf("\nDesde donde deseas imprimir los pares \n");
		scanf("%d",&n);
		c=n;
		while( c>=1 ) {
			if( c % 2 == 0)  // comprobar si el numero es par
				printf("%d ", c);
			c -= 2;
		}
		printf("\nDeseas repetir (S/N)"); 
		fflush(stdin); // borra el buffer de entrada ayuda a leer numeros y carateres juntos
		scanf("%c",&op);
	} while(toupper(op)!='N');
	printf("\nGracias por utilizar este programa\n");
}
