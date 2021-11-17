// Leer elemtnos en un arreglo

#include<stdio.h>
main()
{
	int nums[5],i;
	
	printf("Dame los valores del arreglo \n");
	for(i=0; i<5; i++) {
		printf("nums[%d] = ",i);
		scanf("%d", &nums[i]);
	}
	
	printf("\nLos elementos del arreglo son:\n");
	for(i=0; i<5; i++) {
		printf("nums[%d] = ",i);
		printf("%d\n",nums[i]);
	}

}
