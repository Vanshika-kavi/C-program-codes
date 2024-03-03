#include<stdio.h>
main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%3==0)
    {
        printf("number is divisible by 3");
    }
    else if(num%5==0)
    {
        printf("number is divisible by 5");
    }
    else
    {
        printf("number is not divisible");
    }
}
