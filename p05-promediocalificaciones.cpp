// Promedio de tres calificaciones
// Carlos Castañeda Ramírez

#include <stdio.h>

main() {
	int cal1, cal2, cal3;
	float promedio;
	// Entrada
	printf("Calculando el promedio de tres calificaciones \n");
	printf("Calificacion 1 "); scanf("%d", &cal1);
	printf("Calificacion 2 "); scanf("%d", &cal2);
	printf("Calificacion 3 "); scanf("%d", &cal3);
	// Proceso
	promedio = ( cal1 + cal2 + cal3 ) / 3; 
	// Salida
	printf("\n");
	printf("El promedio es = %f \n", promedio);
	printf("Hasta pronto \nGracias por usar el programa\n");
}
