#include<stdio.h>
fun(int a)
{
   static int i;
    if(i<=100)
    {
        printf("%d\n",a*i);
        i++;
       // scanf("%d",&a);
        fun(a);
    }
}

void main()
{
    int a;
   scanf("%d",&a);
    printf("#Multiplication Table of %d :\n ",a);
    fun(a);
    printf("Done!");
}
