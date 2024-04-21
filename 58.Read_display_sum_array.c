#include<stdio.h>
void read_array(int a[10][10],int r,int c);
void display_array(int a[10][10],int r,int c);
int sum_matrix (int a[10][10],int r,int c);
int main()
{
    int a[10][10],r,c,sum=0;
    printf("Enter number for rows and columns");
    scanf("%d%d",&r,&c);
    if(r<=0 || c<=0)
    {
        printf("Invalid input");
    }
    else
    {
        read_array(a,r,c);
        display_array(a,r,c);
        sum=sum_matrix(a,r,c);
        printf("sum=%d\n",sum);
        return 0;
    }
    void read_array(int a[10][10],int r,int c)
    {
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    void display_array(int a[10][10],int r,int c)
    {
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    int sum_matrix(int a[10][10],int r,int c)
    {
        int sum=0;
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("sum=%d\n",a[i][j]);
            }
            printf("\n");
        }
    }
}
