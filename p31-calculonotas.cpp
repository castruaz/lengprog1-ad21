// Envia un mensaje en base al promedio
// Carlos Castaneda Ramirez
// 23 Septiembre 2021

#include<stdio.h>
main() {
	float c1, c2, c3, p ;
	
	printf("Verificando el promedio de tres califiaciones e imprime mensaje\n");
	printf("Dame calificacion 1 "); scanf("%f", &c1);
	printf("Dame calificacion 2 "); scanf("%f", &c2);
	printf("Dame calificacion 3 "); scanf("%f", &c3);
	p = ( c1 + c2 + c3 ) / 3;
	printf("El promedio es %.2f\n\n", p);
	if( p>=0 && p<=6 )    printf("Quedas reprobado\n");
	if( p>=6.1 && p<=7 )  printf("Pasas de panzazo\n");
	if( p>=7.1 && p<=8 )  printf("Muy bien, pues mejorar\n");
	if( p>=8.1 && p<=9 )  printf("Excelente sigue así\n");
	if( p>=9.1 && p<=10 ) printf("Perfecto tu esfuerzo valió la pena\n");
}
