#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int numcount,i;
    float sum=0,avg;
     srand(time(NULL));

     printf("Enter number of random numbers:");
     scanf("%d",&numcount);

     printf("Random numbers:");
     for(i=0;i<numcount;i++)
     {
         int num=rand()%100;
         printf("%d\t",num);
         sum+=num;
     }
     avg=sum/numcount;
     printf("\nAverage of random numbers:%.2f\n",avg);

     return 0;
}
