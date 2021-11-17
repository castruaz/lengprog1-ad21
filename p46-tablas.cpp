// Imprimir la tabla que el usuario decida desde 1 hasta 10
#include<stdio.h>
main() {
	int t,i,n;
	printf("Que tabla quieres ");scanf("%d", &t);
	printf("Hasta donde la quieres ");scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		printf("%d x %d = %d\n",t,i,t*i);
	}
}
