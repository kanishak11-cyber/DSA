#include<stdio.h>

void bubble(int *a, int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void main()
{
    int a[10] = {5, 4, 3, 2, 1, 6, 9, 7, 8, 10};
    int i;
    bubble(a, 10);
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}