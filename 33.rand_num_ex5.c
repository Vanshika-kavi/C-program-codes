#include<stdio.h>
#include<stdlib.h>
main()
{
    int num;
    num=rand()%100+1;
    printf("Random numbers:%d\n",num);
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
