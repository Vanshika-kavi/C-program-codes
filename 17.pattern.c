#include<stdio.h>
main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);


     int i,j;
     for(i=0;i<=n;i++)
     {
         for(j=0;j<i;j++)
         {
             printf("*");
         }
         printf("\n");
     }
 }
