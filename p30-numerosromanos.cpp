// Convertir un numero decial a romano
#include<stdio.h>
main() {
	int n;
	
	printf("Convirtiendo un numero decimal a romano \n");
	printf("Dame un numero 1 .. 10 ? "); scanf("%d", &n);
	
	switch(n) { // Permite elegir entre varias opciones
		case 1 : printf("I\n");break; // El break hace que se salga del switch
		case 2 : printf("II\n");break;
		case 3 : printf("III\n");break;
		case 4 : printf("IV\n");break;
		case 5 : printf("V\n");break;
		case 6 : printf("VI\n");break;
		case 7 : printf("VII\n");break;
		case 8 : printf("VIII\n");break;
		case 9 : printf("IX\n");break;
		case 10: printf("X\n");break;
		default: 
			printf("Por ahora solo puedo convertir numeros del 1 al 10\n");
			break;
	}
	
	printf("Gracias se acabo \n");
}
