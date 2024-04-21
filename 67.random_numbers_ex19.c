#include<stdio.h>
int main()
{
    int a,b;
     a=rand()%100+1;
     b=rand()%100+1;
    printf("Before swapping:A=%d B=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping:");
    printf("A=%d ",a);
    printf("B=%d",b);
}
