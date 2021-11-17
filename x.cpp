#include<stdio.h>
main() {
	int i=7, f=5.5;
	char c='w';
	
	printf("%d\n", (i >= 6) && (c == 'w') );
	printf("%d\n", (i >= 6) || (c == 119) );
	printf("%d\n", (f < 11.0) && (i > 100) );
	printf("%d\n", (c != 'p') || ((i + f) <=10) );
	 
	
	 
}
