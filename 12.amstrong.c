#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);

     int temp=n,r,sum;
    while(n)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
        printf("Number is armstrong number");
    else
        printf("Number is not an armstrong strong");
}
