// Dado un angulo decir de que tipo es
#include<stdio.h>
main(){
	float angulo;
	
	printf("Dame un angulo y te dire de que tipo es \n");
	printf("Dame el angulo : "); scanf("%f", &angulo);
	
	if( angulo < 90 ) 	
		printf("El angulo es agudo\n");
	if( angulo == 90 ) 	
		printf("El angulo es recto \n");
	if( angulo >90 && angulo <180) 
		printf("El angulo es obtuso\n");
	if( angulo == 180 ) 
		printf("El angulo es llano \n");
	if( angulo > 180 && angulo < 360 ) 
		printf("El angulo es concavo \n");
}
