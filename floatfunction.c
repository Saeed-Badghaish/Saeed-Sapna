Write a function to add two float.

#include<stdio.h>
int main()
{
float sum(float a, float b)
   return a+b;
   float num1, num2, num3;
   printf("Enter first number: ");
   scanf("%f", &num1);
   printf("Enter second number: ");
   scanf("%f", &num2);

   //Calling the function
   num3 = sum(num1, num2);
   printf("Sum of the entered numbers: %f", num3);
   return 0;
}
 
