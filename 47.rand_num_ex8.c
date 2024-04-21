#include<stdio.h>
int main()
{
    int fact,i,n;
     n=rand()%100+1;
    printf("Random numbers:%d\n",n);
    i=1;
    fact=1;
    while(i<=n)
    {
        fact=fact*i;
            i++;
    }
    printf("fact=%d\n",fact);
}
