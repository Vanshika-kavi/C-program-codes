#include<stdio.h>
main()
{
    float temp;
    printf("Enter temperature:");
    scanf("%f",&temp);
    if(temp<10)
    {
        printf("chilled");
    }
    else
    {
        printf("normal");
    }
}
