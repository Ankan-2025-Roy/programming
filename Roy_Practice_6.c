#include<stdio.h>
void main()
{
    int a;
    printf(" #Find a Number is Even or Odd#\n");
    printf("Enter a Number: ");
    scanf("%d", &a);
    if(a % 2 == 0)
    {
        printf("The Number %d is Even\n", a);
    }
    else
    {
        printf("The Number %d is Odd\n", a);
    }
}