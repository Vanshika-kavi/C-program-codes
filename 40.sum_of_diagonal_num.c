#include <stdio.h>

int main()
{
 int i, j, m = 3, n = 4, a = 0, sum = 0;
 int matrix[3][3]= { { 1, 2, 3 }, { 4, 5, 6 }, { 10, 8, 9,5 } };
    if (m == n)
{
  printf("The matrix is \n");
   for (i = 0; i < m; ++i)
{
   for (j = 0; j < n; ++j)
{
    printf(" %d", matrix[i][j]);
}
    printf("\n");
}
   for (i = 0; i < m; ++i)
{
   sum = sum + matrix[i][i];
   a = a + matrix[i][m - i - 1];
}
  printf("Main diagonal elements sum is = %d\n", sum);
  printf("Other-diagonal elements sum is = %d\n", a);
    }
  else
   printf("not a square matrix\n");
    return 0;
}
