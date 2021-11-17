// Dia de la semana con letras
#include<stdio.h>
main() {
	int dia;
	
	printf("Dame el dia de la semana (1..7)\n");
	printf("Dia ? "); scanf("%d", &dia);
	
	switch(dia) {
		case 1 : printf("Lunes\n"); break;
		case 2 : printf("Martes\n"); break;
		case 3 : printf("Miercoles\n"); break;
		case 4 : printf("Jueves\n"); break;
		case 5 : printf("Viernes\n"); break;
		case 6 : printf("Sabado\n"); break;
		case 7 : printf("Dormingo\n"); break;
		default :
			printf("Dia invalido \n"); break;
	}
	printf("Se acabo \n");
}
