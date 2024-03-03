#include<stdio.h>
main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("number is positive");
    }
    else if(num==0)
    {
        printf("number is zero");
    }
    else if(num<0)
    {
        printf("number is negative");
    }
}
