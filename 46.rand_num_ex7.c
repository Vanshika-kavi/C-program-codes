#include<stdio.h>
void display_digits(int);
int main()
{
    int n;
     n=rand()%100+1;
    printf("Random numbers:%d\n",n);
    display_digits(n);
    return 0;
}
void display_digits(int n)
{
    int rem;
    while(n)
    {
        rem=n%10;
        printf("digit=%d\n",rem);
        n=n/10;
    }
}
