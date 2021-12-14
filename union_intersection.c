#include <stdio.h>
#include <conio.h>

void union_of_set(int a[], int b[], int c[], int n1, int n2)
{
    int i, j, k = 0;
    for (i = 0; i < n1; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (i = 0; i < n2; i++)
    {
        int flag = 0;
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
}
void intersection_of_set(int a[], int b[], int c[], int n1, int n2)
{
    int i, j, k = 0;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
                break;
            }
        }
    }
}
void difference_of_set(int a[], int b[], int c[], int n1, int n2)
{
    int i, j, k = 0;
    for (i = 0; i < n1; i++)
    {
        int flag = 0;
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
}
void symmetric_difference_of_set(int a[], int b[], int c[], int n1, int n2)
{
    int i, j, k = 0;
    for (i = 0; i < n1; i++)
    {
        int flag = 0;
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < n2; i++)
    {
        int flag = 0;
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
}
void main()
{
    int a[10], b[10], c[10], i, n1, n2;
    printf("Enter number of element of set A\n");
    scanf("%d", &n1);
    printf("Enter the element of set A \n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter number of element of set B\n");
    scanf("%d", &n2);
    printf("Enter the element of set B \n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    printf("Union of set A and set B is\n");
    union_of_set(a, b, c, n1, n2);
    for (i = 0; i < n1 + n2; i++)
        printf("%d\n", c[i]);
    printf("Intersection of set A and set B is\n");
    intersection_of_set(a, b, c, n1, n2);
    for (i = 0; i < n1 + n2; i++)
        printf("%d\n", c[i]);
    printf("Difference of set A and set B is\n");
    difference_of_set(a, b, c, n1, n2);
    for (i = 0; i < n1 + n2; i++)
        printf("%d\n", c[i]);
    printf("Symmetric difference of set A and set B is\n");
    symmetric_difference_of_set(a, b, c, n1, n2);
    for (i = 0; i < n1 + n2; i++)
        printf("%d\n", c[i]);
}