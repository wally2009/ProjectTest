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
	
	int a ;
	int b ;
	printf("\nEnter a :"); 
	scanf("%d", &a); 
	printf("\nEnter b :" ); 
	scanf("%d", &b); 
	printf("\nBefore Swap\n\n a = %d b = %d\n", a, b); 
	sap(&a, &b); 
	printf("\nAfter Swap\n\n a = %d  b = %d\n", a, b); 
	return 0 ;
}
