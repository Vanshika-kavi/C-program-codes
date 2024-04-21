#include<stdio.h>
void print_numbers(int);
main()
{
    int i=0;
    print_numbers(i);
}
void print_numbers(int i)
{
    int n;
    while(i<=50)
    {
     n=rand()%50+1;
    printf("Random numbers:%d\n",n);
      i++;
    }
}
