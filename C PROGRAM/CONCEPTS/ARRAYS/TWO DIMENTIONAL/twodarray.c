// two dimentional array
/*

for matrix we use 2d array
syntax int variable_name[row_size][column_size]

*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the limit : ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the numbers a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the numbers b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
}