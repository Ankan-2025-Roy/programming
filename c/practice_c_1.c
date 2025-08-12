#include<stdio.h>
void main()
{
    //1D-array
    int i;
    int A[]={1,2,7,8,9};
    
    printf("%d\n",A+3);
    for(i=0;i<5;i++)
    {
        printf("%d\n",A[i]);

    }

    printf("%d\n",*(A+1));
    printf("%d\n\n\n",1[A]);


    //2D-array

    int B[3][4]={1,2,3,4,5,6,7,8,9};
    int j,k;
    printf("HELLO WORLD\n");
    
    for(j=0;j<3;j++)
    {
        for(k=0;k<4;k++)
        {
        printf("%d\n",B[j][k]);
        }
    }
    printf("\n\n");

    for(k=0;k<4;k++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",B[j][k]);
        }
    }

    printf("%d\n",B);
    printf("%d\n",B+3);

    printf("%d\n",&B[0][1]);
    printf("%d\n",&B+1);

    printf("%d\n\n",B[1]);

    printf("%d\n",*B);
    printf("%d\n",*(B+1));
    printf("%d\n",*(*(B+1)));
    printf("%d\n",*(*(B+1)+1));
    









}

