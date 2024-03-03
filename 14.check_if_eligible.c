#include<stdio.h>
main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18)
        printf("eligible to vote");
    else
        printf("not eligible to vote");
}
