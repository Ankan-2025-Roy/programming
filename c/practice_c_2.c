#include<stdio.h>
struct student
{
    int rno;
    int age;
    float fees;
};
void main()
{
    struct student s1,s2;
    s1.fees=10000;
    s2.fees=12000;
    scanf("%d\n",&s1.rno);
    printf("%d\n",s1.fees+s2.fees);
    printf("%d\n",s1->rno);
}