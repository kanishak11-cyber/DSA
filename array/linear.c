#include <stdio.h>

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
void swaped(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int LSearch(struct Array a, int key){
    int i=0;
    for(i=0; i<a.length;i++)
    {
        if(key==a.A[i])
       { 
           swaped(&a.A[i],&a.A[i-1]);
           return i;
       }
    }
    return -1;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    
    struct Array a={{2,3,4,5,6},10,5};

    printf("%i \n",LSearch(a,5));
    Display(a);
    return 0;

}
