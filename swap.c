#include<stdio.h>
#include<stdlib.h>

/*Sap function : Call by reference*/ 
void  sap(int *x, int *y){
	
	int tmp; 
	tmp = *x ; 
	*x = *y; 
	*y = tmp ; 
}

/*Main function */ 

int main(){
	
	int a = 10; 
	int b = 20; 

	printf("\nBefore Swap\n\n a = %d b = %d\n", a, b); 
	sap(&a, &b); 
	printf("\nAfter Swap\n\n a = %d  b = %d\n", a, b); 
	return 0 ;
}
