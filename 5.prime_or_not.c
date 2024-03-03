#include<stdio.h>
void prime(int n);
main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    prime(n);
}
void prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
    {
        count++;
    }

  if (count==2)
{
    printf("It is a prime number");
}
else
{
    printf("It is not a prime number");
}
}
