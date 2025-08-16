#include<stdio.h>
fun(int a)
{
   static int i=1;
    if(i<=10)
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
    printf("Multiplication of\n ");
   scanf("%d",&a);
    printf("#Multiplication Table of %d :\n ",a);
    fun(a);
    printf("Done!");
}
