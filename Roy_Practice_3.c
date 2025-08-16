#include<stdio.h>
void main()
{
    float beng,eng,math,phy,che,avg;
    printf("Physics marks:\n");
    scanf("%f",&phy);
    printf("Chemistry marks:\n");
    scanf("%f",&che);
    printf("English marks:\n");
    scanf("%f",&eng);
    printf("Bengali marks:\n");
    scanf("%f",&beng);
    printf("Maths marks:\n");
    scanf("%f",&math);

    avg=(beng+eng+math+phy+che)/5;
    printf("Average of marks is %f",avg);

}