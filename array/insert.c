#include <stdio.h>
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

void append(struct Array *a, int x)
{
    if(a->length<a->size)
    a->A[a->length++]=x;
}

void Insert(struct Array *a, int index, int x){
    int i;
    if(index>=0 && index<=a->length)
    {
        for(i=a->length;i>index;i--)
            a->A[i]=a->A[i-1];
            a->A[index]=x;
            a->length++;
    }
}
int main()
{
    struct Array a={{2,3,4,5,6},10,5};
   //append(&a,10);
   Insert(&a,0,10);

    Display(a);

    return 0;
}