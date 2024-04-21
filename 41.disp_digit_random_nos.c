#include<stdio.h>
#include<stdlib.h>
void display_digits(int);
int main()
{
    char ch;
     FILE *fptr;
     fptr = fopen("text.txt", "r");
   if (fptr == NULL)
    {
        printf("File not available.");
        exit(0);
    }
 else
    while ((ch = getc(fptr)) != EOF)
    {
      int rem,n;
    while(n)
    {
        rem=n%10;
        printf("rem=%d\n",rem);
        n=n/10;
    }

    }
    fclose(fptr);

}




