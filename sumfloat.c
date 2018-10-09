Write a program to get two float from the user and print the sum of the two float?

#include<stdio.h>
#include<conio.h>

void main( )
{
  float num1,num2,sum;
  clrscr( );
 
  printf("Enter first number: ");
  scanf("%f",&num1); //reading the float number

  printf("Enter second number: ");
  scanf("%f",&num2); //reading the second float number

  sum=num1+num2;

  printf("Sum of two numbers = %f",sum);
  getch( );
}
