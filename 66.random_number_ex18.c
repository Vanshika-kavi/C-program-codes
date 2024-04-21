#include<stdio.h>
main()
{

 int n;
  n=rand()%100+1;
    printf("Random numbers:%d\n",n);

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
