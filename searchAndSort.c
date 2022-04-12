#include<stdio.h>

void LinearSearch();
void Sort();
void main()
{
    int n;
    int a[n];
    int x;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter the element to be searched\n");
    
    scanf("%d",&x);
    LinearSearch(a,n,x);
    
    Sort(a,n);

}
void Sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

}
void LinearSearch(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("The element is found at %d\n",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("The element is not found\n");
    }
}