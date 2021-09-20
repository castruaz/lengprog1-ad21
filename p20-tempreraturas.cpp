// Convertir farenheit a centigrados, y centigrados a farenheit
#include<stdio.h>
main(){
	float temperatura=0, grados=0;
	int op;
	
	printf("Convirtiendo temperaturas \n");
	printf("[1] Farenheit    a Centigrados\n");
	printf("[2] Centeigrados a Farenheit\n");
	printf("Elije una opcion ? "); scanf("%d", &op);
	
	if(op==1) {
		printf("Convirtiendo farenheit a centigrados\n");
		printf("Dame los grados farenheit ?"); scanf("%f", &temperatura);
		grados = (temperatura-32) * (5/9);
		printf("%f farnheit equivalen a %f centigrados", temperatura, grados);
	} 
	else 
	   if(op==2) {
			printf("Convirtiendo centigrados a farenheit\n");
			printf("Dame los grados centigrados ?"); scanf("%f", &temperatura);
			grados =  (temperatura * (9/5) ) + 32;
			printf("%f centigrados equivalen a %f farenheit", temperatura, grados);
		}
	   else 
		  printf("Opcion invalida\n");
	
	printf("Gracias\n");
}
