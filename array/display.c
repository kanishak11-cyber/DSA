#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array a){
    int i;
    printf("Elements  are :\n");
    for(i=0;i<a.length;i++) 
    printf("%d",a.A[i]);
}
int main()
{
    struct Array a;
    int n,i;
    printf("Enter size of an array ");
    scanf("%d", &a.size);

    a.A=(int *)malloc(a.size*sizeof(int));
    a.length=0;

    printf("Enter numberof numbers ");
    scanf("%i",&n);

    printf("Enter all element :\n ");
    for(i=0;i<n;i++)
    scanf("%d",&a.A[i]);
    a.length=n;

    Display(a);

    return 0;
}