#include<stdio.h>
void main()
{
    //WAP to check whether a number is positive, negative or zero.
    float n;
    printf("choice your Number=");
    scanf("%f",&n);
    if(n<0)
    {
        printf("Negative Number\n\n");
    }
    else if(n>0)
    {
        printf("Positive Number\n\n");
    }
    else
    {
        printf("Zero\n\n");
    }

    //WAP to find the largest of two numbers.

    float a,b;
    printf("Enter a=");
    scanf("%f",&a);
    printf("\nEnter b=");
    scanf("%f",&b);
    if(a>b)
    {
        printf("a is larger number\n\n");
    }
    else if(b>a)
    {
        printf("b is larger number\n\n");
    }
    else
    {
        printf("Both are equal\n\n");
    }

    //WAP to check whether a character is vowel or consonant.


    char ch;
    printf("Enter a character=");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'a':printf("Vowel\n\n");
                break;
        case 'e':printf("Vowel\n\n");
                break;
        case 'i':printf("Vowel\n\n");
                break;
        case 'o':printf("Vowel\n\n");
                break;
        case 'u':printf("Vowel\n\n");
                break;
        case 'A':printf("Vowel\n\n");
                break;
        case 'E':printf("Vowel\n\n");
                break;
        case 'I':printf("Vowel\n\n");
                break;
        case 'O':printf("Vowel\n\n");
                break;
        case 'U':printf("Vowel\n\n");
                break;
        default:printf("Consonant\n\n");
    }   

}