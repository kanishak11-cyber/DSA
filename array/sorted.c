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

void InsertSort(struct Array *a, int x)
{
    int i =a->length-1;
    if(a->length==a->size)
    return ;
    while(i>=0 &&a->A[i]>x)
    {
        a->A[i+1]=a->A[i];
        i--;
    }
    a->A[i+1]=x;
    a->length++;

}
int isSorted(struct Array a)
{
    int i;
    for(i=0; i<a.length-1; i++)
    {
        if(a.A[i]>a.A[i+1])
        return 0;
    }
    return 1;
}
void swap(int *x, int *y){
    int temp;
    temp= *x;
    *x = *y;
    *y = temp;
}

void Rearrange( struct Array *a)
{
    int i,j;
    i=0;
    j=a->length-1;
    while(i<j)
    {
        while(a->A[i]<0) i++;
        while(a->A[i]>=0) j--;
        if(i<j)
        swap(&a->A[i],&a->A[j]);
    }
}


int main()
{
    struct Array a = {{2, -3,25, 10,-17, 9,-7}, 10, 5};
    Rearrange(&a);
    Display(a);
  
    return 0;
}