#include<stdio.h>
void main()
{
    int a=5,num,x,Cgpa=10;
    
    //scanf("%d\n",&num);
    printf("%d\n",a);
    printf("Hello World\n");

    //scanf("%d\n",&x);
    //if(x<5)
    {
        printf("Hello Ankan How are You ?\n");
    }
   // else
    {
        printf("Nice to Meet You\n");
    }
    printf("Good Bye\n");


   // scanf("%d",&Cgpa);
    switch(Cgpa)
    {
        case 10:printf("A+\n");
               // break;
        case 9:printf("A\n");
                break;
        case 8:printf("B+\n");
                break;
        case 7:printf("B\n");
                break;
        case 6:printf("C\n");
                break;
        case 5:printf("Failed\n");
                break;
        default:printf("Try to Next Time\n");

    }

    int X=10;

    switch(X)
 {
        case 6+2:printf("Hello World");
                break;
        case 6+3:printf("Hello Friend");
                break;
        case 6+4:printf("I will get unnder Top 10 Rank in GATE 2029\n  ");
                break;
        case 7:printf("COngratulation");
                break;
        default:printf("dont worry");
    }

    //Loop=>while,do while,for
    int i,j;

    for(i=0,j=10;i<j;i++)
    {
        printf("GOOD WORK\n");
    }

    printf("%d\n",a);
    //printf("%d\n",a++);
    //printf("%d\n",++a);

    int A=7,B=8;
    float *p,*q;
    p=&A;
    q=&B;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",-(q-p));


    int C[5]={1,2,3,4,5};
    int k;
    for(k=0;k<5;k++)
    {
        printf("%d\n",C[k]);
    }
    

    



    


}
