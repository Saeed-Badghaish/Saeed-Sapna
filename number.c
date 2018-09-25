Write a program to get a number from the user and print it? 
#include <stdio.h>
int main()
{
    int number;
     
    printf("Enter an integer: ");  
    scanf("%d", &number); 
    
    printf("You entered: %d", number);
    return 0;
}
