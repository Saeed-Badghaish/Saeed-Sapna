Write a function to compare 3 numbers and test it.
#include <stdio.h>

char compareIntegers(int a,int b, int c){
	if(a==b&&a==c)
		return 0;
	else
		return -1;
}
int main(){
	int a,b,c;
	int *pa,*pb,*pc;
	
	pa=&a; pb=&b; pc=&c;
	
	printf("Enter first integer: ");
	scanf("%d",pa);
	printf("Enter second integer: ");
	scanf("%d",pb);
	printf("enter third intger");
	scanf("%d",pc);
	//compare 
	if(compareIntegers(*pa,*pb,*pc)==0)
		printf("Integers are equal.\n");
	else
		printf("Integers are not equal.\n");
}
