// Ejemplo de constates literales de caracter y cadenas

#include<stdio.h>
#include<string.h>

main() {
	char respuesta='N';
	char letra1, letra2, letra3;
	char ca, cb, cc, cd, ce, cf;
	
	char mensaje[]="Bienvenido a Lenguaje C";
	char encabezado[]="Primero\tSegundo\tTercero";
	char nombre[100];
	
	printf("Trabajando con caracteres\n");
	printf("Dame tu nombre ");gets(nombre);
	printf("Estas cansado (S/N) "); scanf("%c", &respuesta);
	printf("Introduce 3 letras separadas por espacio ?\n");
	scanf(" %c %c %c", &letra1, &letra2, &letra3);
	printf("Cansado %c\n", respuesta);
	printf("Letra 1 %c\tLetra 2 %c\tLetra 3 %c\n",letra1,letra2,letra3);
	
	ca=201;	cb=205;	cc=187;
	cd=200;	ce=186;	cf=188;
	printf("%c%c%c%c%c%c%c\n",ca,cb,cb,cb,cb,cb,cc);
	printf("%c     %c\n",ce,ce);
	printf("%c     %c\n",ce,ce);
	printf("%c     %c\n",ce,ce);
	printf("%c     %c\n",ce,ce);
	printf("%c%c%c%c%c%c%c\n",cd,cb,cb,cb,cb,cb,cf);
	
	printf("El mensaje es  : ");puts(mensaje);
	printf("El encabezado  : ");puts(encabezado);
	printf("Gracias "); puts(nombre);
		
}
