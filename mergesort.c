#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void merge(int a[], int b[], int c[], int n1, int n2)
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
void mergeSort(int a[], int n)
{
    int i, j, k;
    if (n == 1)
        return;
    int mid = n / 2;
    int b[mid];
    int c[n - mid];
    for (i = 0; i < mid; i++)
        b[i] = a[i];
    for (i = mid; i < n; i++)
        c[i - mid] = a[i];
    mergeSort(b, mid);
    mergeSort(c, n - mid);
    merge(b, c, a, mid, n - mid);
}

void main()
{
    int a[]={1,4,2,6,3,7};
    int n=sizeof(a)/sizeof(a[0]);
    mergeSort(a,n);
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}