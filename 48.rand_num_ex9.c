#include<stdio.h>
int main()
{
    int n,sum;
     n=rand()%100+1;
    printf("Random numbers:%d\n",n);
    sum=sum_of_digits(n);
    printf("sum=%d\n",sum);
    return 0;
}
int sum_of_digits(int n)
{
    int rem,sum=0;
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
