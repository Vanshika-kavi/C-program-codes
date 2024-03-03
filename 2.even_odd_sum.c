#include<stdio.h>
void odd_even_sum(int);
int main()
{
    int n;

    printf("Enter value of n\n");
    scanf("%d",&n);
    odd_even_sum(n);
    return 0;
}
void odd_even_sum(int n)
{
    int i=1;
    int osum=0,esum=0;
    while(i<=n)
    {
        if(i%2!=0)
            osum=osum+i;
        else
            esum=esum+i;
        i++;
    }
    printf("sum of odd numbers=%d\n",osum);
    printf("sum of even numbers=%d\n",esum);
}
