#include<stdio.h>
int main()
{
    int a=15,b=30;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, value of a=%d and b=%d", a, b);
    return 0;   
}