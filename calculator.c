#include<stdio.h>
#include<stdlib.h>
/*add */
int add(int x, int y){
	return x + y ; 
}
/*Substraction*/
int minus(int x, int y){
	return x - y ; 
}

/*Division*/
int  divise (int x, int y){
	if(y == 0){
		printf("\nCannot divide a number by zero\n");
	}
	else
	return x/y;
}

/*Multiplication*/
int mult(int x, int y){
	return x * y ; 
}


int main(){
	int x = 10; 
	int y = 0; 
	printf("\n%d + %d = %d\n", x, y, add(x,y)); 
	printf("\n%d - %d = %d\n", x, y, minus(x,y)); 
	printf("%\n%d / %d = %d \n", x, y, divise(x, y)); 
	printf("%\n%d * %d = %d\n", x, y, mult(x,y)); 
	return 0 ; 

}
