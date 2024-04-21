#include<stdio.h>
#include<stdlib.h>
void fib(int);
main()
{
    int a,b,c,i,num;
    num=rand()%100+1;
    printf("Random numbers:%d\n",num);
    a=-1;
    b=1;
    for(i=1;i<num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}
