#include<stdio.h>

void main(){
    int a[10],b[10],n1,n2;
    printf("Enter the size of Set: A- ");
    scanf("%d",&n1);
    printf("Enter the elements in set: A- ");
    for(int i =0; i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of Set: B - ");
    scanf("%d",&n2);
    printf("Enter the elements in set: B - ");
    for(int i =0; i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The Cartesian Product of A and B is: ");
    printf("{ ");
    for(int i =0; i<n1;i++)
    {
        for(int j =0; j<n2;j++)
        {
            printf("{ ");
            printf("%d %d",a[i],b[j]);
            printf(" },");
        }
    }
    printf(" }");

}