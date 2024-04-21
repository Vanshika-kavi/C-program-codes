#include<stdio.h>
#include<stdlib.h>
main()
{
    int num;
    num=rand()%100+1;
    printf("Random numbers:%d\n",num);
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
