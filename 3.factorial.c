#include<stdio.h>
int main()
{
    int fact,i,n;
    printf("Enter n\n");
    scanf("%d",&n);
    i=1;
    fact=1;
    while(i<=n)
    {
        fact=fact*i;
            i++;
    }
    printf("fact=%d\n",fact);
}
