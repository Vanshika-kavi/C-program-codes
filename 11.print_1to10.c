#include<stdio.h>
void print_numbers(int);
main()
{
    int i=0;
    print_numbers(i);
}
void print_numbers(int i)
{
    while(i<=50)
    {
        printf("%d\n",i);
        i++;
    }
}
