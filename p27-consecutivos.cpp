// Verifica si 3 numeros son consecutivos
// n1  n2 n3   n1 n2 n3
// 10 11 12    9  5  6 
#include<stdio.h>
main() {
	int n1, n2, n3;
	
	printf("Verificando si tres numero son consecutivos\n");
	printf("Numero 1 ? ");scanf("%d",&n1);
	printf("Numero 2 ? ");scanf("%d",&n2);
	printf("Numero 3 ? ");scanf("%d",&n3);
	
	if( n2-n1==1 && n3-n2==1 )
		printf("Los numeros si son consecutivos\n");
	else
		printf("Los numeros no son consecutivos\n");
}
