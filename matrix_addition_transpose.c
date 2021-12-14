#include<stdio.h>

void main()
{
    int add[5][5],r,c,transpose[5][5],A[5][5],B[5][5],i,j;
    printf("Enter the column: ");
    scanf("%d",&r);
    printf("Enter the row: ");
    scanf("%d",&c);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("Addition of  matrix A and matrix B:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            add[i][j]=A[i][j]+B[i][j];
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix added matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            transpose[i][j]=add[j][i];
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }


}