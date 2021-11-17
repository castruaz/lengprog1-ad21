// Programa repaso primer parcial - Administrar venta de pan
#include<stdio.h>
#include<ctype.h>
main() {
	char tipo, resp;
	int cantidad, tv=0, tc=0, td=0, tp=0, venta=0;
	do {
		tv++;
		printf("\nVenta %d \n", tv);
		printf("Venta de pan dulce y barato\n");
		printf("Que deseas (C)oncha $3, (D)ona $5, (P)uerquito $8 ? ");
		scanf("%c", &tipo); fflush(stdin);
		printf("Cantidad ? ");
		scanf("%d",&cantidad);fflush(stdin);
		switch(toupper(tipo)) {
			case 'C' : tc+=cantidad;break;
			case 'D' : td+=cantidad;break;
			case 'P' : tp+=cantidad;break;
		}
		printf("Otra venta (S/N) ? ");
		scanf("%c", &resp); fflush(stdin);
		
	} while(toupper(resp)!='N');
	printf("\nResumen\n");
	printf("Total de ventas : %d \n",tv);
	printf("Conachas   : %d - $%d\n", tc, tc*3);
	printf("Donas      : %d - $%d\n", td, td*5);
	printf("Puerquitos : %d - $%d\n", tp, tp*8);
	venta = (tc*3) + (td*5) + (tp*8);
	printf("Total ventas : %d\n", venta);
	if( venta< 40 ) printf("Mensaje : ventas malas\n");
	if( venta>=41 && venta<=60 ) printf("Mensaje : la venta mejora cada dia\n");
	if( venta>61 ) printf("Mensaje: la venta fue grandiosa");
}
