#include<conio.h>
#include<stdio.h>

void LinearSearch();
void InsertionSearch();
void BinarySearch();
void main(){
    int choice;
    printf("Enter your choice\n");
    printf("1.Linear Search\n");
    printf("2.Insertion Search\n");
    printf("3.Binary Search\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            LinearSearch();
            break;
        case 2:
            InsertionSearch();
            break;
        case 3:
            BinarySearch();
            break;
        default:
            printf("Invalid choice\n");
    }
}

void LinearSearch()
{
    int n,i,x;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter the element to be searched\n");
    scanf("%d",&x);
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

void InsertionSearch()
{
    int n,i,x,j;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter the element to be searched\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("The element is found at %d\n",i+1);
            break;
        }
        else if(a[i]>x)
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            a[n]=x;
            n++;
            printf("The element is found at %d\n",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("The element is not found\n");
    }
}

void BinarySearch()
{
    int n,i,x,j,k,l,m;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter the element to be searched\n");
    scanf("%d",&x);
    k=0;
    l=n-1;
    while(k<=l)
    {
        m=(k+l)/2;
        if(a[m]==x)
        {
            printf("The element is found at %d\n",m+1);
            break;
        }
        else if(a[m]>x)
        {
            l=m-1;
        }
        else
        {
            k=m+1;
        }
    }
    if(k>l)
    {
        printf("The element is not found\n");
    }
}