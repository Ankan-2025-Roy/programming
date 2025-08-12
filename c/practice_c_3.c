#include<stdio.h>
int area(int r)
{
    int a;
    a=3.14*r*r;
    return a;

}
int circ(int r)
{
    int c;
    c=2*3.14*r;
    return c;
}
void main()
{
    int radius;
    scanf("%d\n",&radius);
    printf("Area of Circle=%f\n",area(radius));
    printf("perimeter of circle=%f\n",circ(radius));
}