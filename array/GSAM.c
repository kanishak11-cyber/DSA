#include<stdio.h>

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
int Get(struct Array a, int index) {
    if(index>=0 && index<a.length)
    return a.A[index];

    return -1;
}

void set(struct Array *a, int index,int x) {
    if(index>=0 && index<a->length)
    a->A[index]=x;
}

int max(struct Array a)
{
    int max = a.A[0];
    int i;
    for ( i = 1; i < a.length; i++)
    {
        /* code */
        if(a.A[i]>max) 
            max=a.A[i];
    }
    return max;
    
}
int min(struct Array a)
{
    int min = a.A[0];
    int i;
    for (i = 1; i < a.length; i++)
    {
        /* code */
        if (a.A[i] < min)
            min = a.A[i];
    }
    return min;
}

int Sum(struct Array a)
{
    int s=0,i;
    for(i=0;i<a.length;i++)
        s+=a.A[i];
    return s;
}

float Avg(struct Array a)
{
    return(float)Sum(a)/a.length;
}
int main()
{
    struct Array a = { { 2,3,4,5,6},10,5};
    printf("%d\n",Get(a,9));
    
    
    Display(a);

    return 0;
}