#include<stdio.h>
void print_odd_even(int);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n>0)
{
    print_odd_even(n);
}
else
{
    printf("n should be positive");
}
return 0;
}
void print_odd_even(int n)
{
    int i=1;
    while(i<=n)
    {
        if (i%2!=0)
            printf("odd numbers=%d\t\n",i);
             i++;
    }
    i=1;
    while(i<n)
    {
        if(i%2==0)
            printf("even numbers=%d\t\n",i);
        i++;
    }
}
