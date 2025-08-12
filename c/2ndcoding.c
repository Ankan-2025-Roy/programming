#include<stdio.h>
int main(){
    int cgpa;
    scanf("%d",&cgpa);
    switch (cgpa)
    {
    case 10: printf("A+");
            break;
    case  9: printf("A");
            break;
    case  8: printf("B");
            break;
    case  7: printf("C");
            break;
    case  6: printf("D");
            break;
    case  5: printf("fail");
            break;
    default: printf("invalid cgpa");
    }      
}