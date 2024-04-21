#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fact,i,n,k,c;
     char ch;
     FILE *fptr;
     fptr = fopen("assignmenttext.txt", "r");
   if (fptr == NULL)
    {
        printf("File not available.");
        exit(0);
    }
   else
    {
     while ((ch = getc(fptr)) != EOF)
    {

         i=1;
        fact=1;
       while(i<=n)
    {
        fact=fact*i;
            i++;
    }
    printf("fact=%d\n",fact);

            return 0;
    }

    fclose(fptr);
}
}
