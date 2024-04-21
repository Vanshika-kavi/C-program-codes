#include<stdio.h>
#include<stdlib.h>
void prime(int);
main()
{
    int num;
    num=rand()%100+1;
    printf("Random numbers:%d\n",num);
    prime(num);
}
void prime(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
        if(num%i==0)
    {
        count++;
    }
    if(count==2)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}
