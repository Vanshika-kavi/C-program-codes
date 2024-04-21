#include<stdio.h>
main()
{
    float r,area;
    r=rand()%100+1;
    printf("Random numbers:%.2f\n",r);
    if(r>0)
    {
        area=3.14*r*r;
        printf("AREA=%f\n",area);
    }
    else
    {
        printf("radius is negative");
    }
}
