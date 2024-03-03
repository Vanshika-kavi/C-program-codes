#include<stdio.h>
void fib(int n);
main()
{
    int a,b,c,i,n=7;
    a=-1;
    b=1;
    for(i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}
