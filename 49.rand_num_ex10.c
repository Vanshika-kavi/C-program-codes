#include<stdio.h>
int palindrome_number(int);
int main()
{
    int n,pal;
     n=rand()%100+1;
    printf("Random numbers:%d\n",n);
    pal=palindrome_number(n);
    return 0;
}
int palindrome_number(int n)
 {
     int rem,rev=0,temp=n;
     while(n)
     {
         rem=n%10;
         rev=rev*10+rem;
         n=n/10;
     }
     if(temp==rev)
     {
         printf("Number is palindrome");
     }
     else
     {
         printf("Number is not a palindrome");
     }
 }
