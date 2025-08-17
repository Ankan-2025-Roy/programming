#include<stdio.h>
void main()
{
    float a;
    printf("Enter a Number: ");
    scanf("%f", &a);
    if(a<0)
    {
        printf("Absolute value of (%f) = %f\n", a, -a);
    }
    else
    {
        printf("Absolute value of(%f) = %f\n", a, a);
    }
    
}