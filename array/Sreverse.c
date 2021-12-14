#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array a)
{
    int i;
    printf("Elements  are : ");
    for (i = 0; i < a.length; i++)
        printf("%d ", a.A[i]);
}

void Reverse( struct Array *a)
{
    int *b,i,j;
    b=(int *)malloc(a->length*sizeof(int));

    for(i=a->length-1,j=0;i>=0;i--,j++)
    {
        b[j] =a->A[i];
    }
    for(i=0;i>a->length;i++)
        a->A[i] = b[i];
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Rev(struct Array *a)
{
    int i,j;
    for(i=0,j=a->length-1;i++,j--;)
    {
        swap(&a->A[i],&a->A[j]);
    }
}

int main()
{
    struct Array a = { { 2,3,4,5,6},10,5};
    Display(a);
    Rev(&a);
    printf("\n");
    Display(a);
    Reverse(&a);
    printf("\n");
    Display(a);

    return 0;
}