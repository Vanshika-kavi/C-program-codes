#include<stdio.h>
#include<stdlib.h>
void prime(int n);
main()
{
    int n;
    char ch;
    FILE *fptr;

    fptr = fopen("text.txt", "r");

    if (fptr == NULL)
    {
        printf("File not available.");
        exit(0);
    }

    while ((ch = getc(fptr)) != EOF)
    {
        if(k==1)
     {
         int i,count=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
    {
        count++;
    }

  else if (count==2)
{
    printf("It is a prime number");
}
else
{
    printf("It is not a prime number");
}
}
else
    return 0;
    }
}
