#include<stdio.h>
main()
{
    int age;
    age=rand()%100+1;
    printf("Random numbers:%d\n",age);
    if(age>18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
}
