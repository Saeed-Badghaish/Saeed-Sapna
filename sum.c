Write a program to get two integers from the user and print the sum of the two integers? 

#include <stdio.h>
int main()
{
    int a,b,sum;
    
    printf("Enter two integers: ");

  
    scanf("%d %d", &a, &b);

    
    sum = a+b;

    
    printf("the sum of two number is: %d",sum);

    return 0;
}
