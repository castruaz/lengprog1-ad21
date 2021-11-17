// numeros imapres ascendente hasta n
#include<stdio.h>
#include<ctype.h> // toupper
main() {
	int c, n;
	char op;
	do {
		printf("Numeros impares ascendente \n");
		printf("\nHasta donde deseas imprimir los impares \n");
		scanf("%d",&n);
		c=1;
		while( c<=n ) {
			printf("%d ", c);
			c += 2;
		}
		printf("\nDeseas repetir (S/N)"); 
		fflush(stdin); // borra el buffer de entrada ayuda a leer numeros y carateres juntos
		scanf("%c",&op);
	} while(toupper(op)!='N');
	printf("\nGracias por utilizar este programa\n");
}
