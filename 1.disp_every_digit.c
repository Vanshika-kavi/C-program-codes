#include<stdio.h>
void display_digits(int);
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    display_digits(n);
    return 0;
}
void display_digits(int n)
{
    int rem;
    while(n)
    {
        rem=n%10;
        printf("rem=%d\n",rem);
        n=n/10;
    }
}
