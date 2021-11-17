// Imprime la tabla deseada desdel 1 hasta el x 
#include<stdio.h>
main() {
	int t, c, x;
	printf("Imprimiendo la tabla que pidas del 1 al 10\n");
	printf("Que tabla quieres ? \n");scanf("%d", &t);
	printf("Hasta donde  ? \n");scanf("%d", &x);
	c=1;
	while( c<=x )
	{
		printf("%d x %d = %d\n",t,c,t*c);
		c++;
	}
}
