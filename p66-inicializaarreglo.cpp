// Inicializar un arreglo con valores predeterminados
#include<stdio.h>
main()
{
	int nums[5]={10,20,30,40,50};
	
	printf("El primero es %d\n", nums[0] );
	printf("El ultimo  es %d\n", nums[4] );
	
	for(int i=0; i<5; i++)
		printf("%d\n", nums[i]);
	
}
