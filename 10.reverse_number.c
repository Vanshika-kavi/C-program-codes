#include<stdio.h>
int reverse_numbers(int);
int main()
{
    int n,rev;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    rev=reverse_numbers(n);
    printf("rev=%d\n",rev);
    return 0;
}
int reverse_numbers(int n)
{
    int rem,rev=0;
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
