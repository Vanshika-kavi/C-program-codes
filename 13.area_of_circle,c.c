#include<stdio.h>
main()
{
    float r,area;
    printf("Enter radius value:");
    scanf("%f",&r);
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
