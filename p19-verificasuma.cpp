// verifica si la suma de dos numeros es igual a un tercero
// n1 n2 n3              n1 n2 n3       
// 3  6  9 - Iguales      2 3  4  - Distintos
#include<stdio.h>
main(){
	int n1, n2, n3;
	
	printf("Verificando si la suma de dos numeros es igual a un tercero\n");
	printf("Dame un primer numero  "); scanf("%d", &n1);
	printf("Dame un segundo numero "); scanf("%d", &n2);
	printf("Dame un tercer numero  "); scanf("%d", &n3);
	
	if(n1+n2==n3) 
		printf("Iguales\n"); 
	else 
		printf("Distintos\n");
	
	printf("Gracias por utilizar este programa");
	
}
