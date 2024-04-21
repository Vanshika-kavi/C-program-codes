#include<stdio.h>
main()
{
    float temp;
     temp=rand()%100+1;
    printf("temperature:%.2f\n",temp);
    if(temp<10)
    {
        printf("chilled");
    }
    else
    {
        printf("normal");
    }
}
