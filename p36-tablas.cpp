// Imprime la tabla deseada desdel 1 hasta el 10 
#include<stdio.h>
main() {
	int t, c;
	printf("Imprimiendo la tabla que pidas del 1 al 10\n");
	printf("Que tabla quieres ? \n");
	scanf("%d", &t);
	c=1;
	while( c<=10 )
	{
		printf("%d x %d = %d\n",t,c,t*c);
		c++;
	}
}
