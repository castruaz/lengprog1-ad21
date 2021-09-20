// verifica si la suma de dos numeros es igual a un tercero
// n1 n2 n3   n1  n2 n3   n1 n3 n2     n2 n3 n1        
// 3, 2, 5:   3 + 2 = 5?  3 + 5 =2?    2 + 5 =3?
// 8  7  1    8 + 7 = 1   8 + 1 = 7   7 + 1 = 8
#include<stdio.h>
main(){
	int n1, n2, n3;
	
	printf("Verificando si la suma de dos numeros es igual a un tercero\n");
	printf("Dame un primer numero  "); scanf("%d", &n1);
	printf("Dame un segundo numero "); scanf("%d", &n2);
	printf("Dame un tercer numero  "); scanf("%d", &n3);
	
	if(n1+n2==n3) printf("%d + %d = %d", n1, n2, n3); 
	if(n1+n3==n2) printf("%d + %d = %d", n1, n3, n2); 
	if(n2+n3==n1) printf("%d + %d = %d", n2, n3, n1); 
	  
		 
	
	printf("\nGracias por utilizar este programa");
	
}
