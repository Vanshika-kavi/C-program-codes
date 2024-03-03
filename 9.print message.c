#include<stdio.h>
void print_message(int);
int main()
{
    int n;
    printf("Enter no of times to print\n");
    scanf("%d",&n);
    print_message(n);
    return 0;
}
void print_message(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("Hello World\n");
        i++;
    }
}
