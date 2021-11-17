// Operaciones matematicas con dos numeros                                                                                                                                              
// Carlos Castaneda
// 24 Ago 2021

#include <stdio.h>
#include <math.h>

main() {
	float num1, num2;
	float suma, resta, multi, divi, resi, pote;
	
	printf("Calculando operaciones matematicas con dos numeros\n");
	printf("Dame el numero 1 ? "); scanf("%f", &num1);
	printf("Dame el numero 2 ? "); scanf("%f", &num2);
	
	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;
	resi =  fmod(num1, num2); //num1 % num2;
	pote = pow(num1, num2);
	
	printf("Los numeros son %f , %f\n", num1, num2);
	printf("La suma           = %f\n", suma);
	printf("La resta          = %f\n", resta);
	printf("La multiplicacion = %f\n", multi);
	printf("La division       = %f\n", divi);
	printf("El residuo        = %f\n", resi);
	printf("La potencia       = %f\n", pote);
}
