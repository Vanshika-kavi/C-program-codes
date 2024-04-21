#include<stdio.h>
#include<stdlib.h>
main()
{
    int fact,i,num;
    num=rand()%100;
    printf("Random numbers:%d\n",num);
    i=1;
    fact=1;
    while(i<num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial is: %d\n",fact);
}
