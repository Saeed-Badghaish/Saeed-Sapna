Write a function to compare 2 numbers and test it
#include <stdio.h>

char compareIntegers(int a,int b){
	if(a==b)
		return 0;
	else
		return -1;
}
int main(){
	int a,b;
	int *pa,*pb;
	
	pa=&a; pb=&b;
	
	printf("Enter first integer: ");
	scanf("%d",pa);
	printf("Enter second integer: ");
	scanf("%d",pb);
	
	//compare 
	if(compareIntegers(*pa,*pb)==0)
		printf("Integers are equal.\n");
	else
		printf("Integers are not equal.\n");
	
	return 0;
}
