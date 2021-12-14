#include<stdio.h>
#include<stdlib.h>
struct Matrix {
    int *A;
    int n;
};

// for setting the values at location;
void set(struct Matrix *m,int i,int j,int x)
{
    if(i>=j)
        m->A[i*(i-1)/2+(j-1)]=x;

}
//for getting the value from the loctaion
int get(struct Matrix m,int i ,int j)
{
    if(i>=j)
        return m.A[i*(i-1)/2+(j-1)];
    else
        return 0;
}
//fpr diagonal matrix Display
void Display(struct Matrix m)
{
    int i;
    int j;
    for(i=1;i<=m.n;i++)
    {   printf("\n");
        for(j=1;j<=m.n;j++)
        {
            if(i>=j)
            printf(" %d ",m.A[i*(i-1)/2+j-1]);
            else
            printf(" 0 ");
        }
        
    }
}
int main()
{
   
    struct Matrix m;
    int i,j,x;
    printf("Enter Dimension of matrix");
    scanf("%d",&m.n);
   
    m.A=(int *)malloc(m.n*(m.n-1)/2*sizeof(int));

    printf("Enter all elements of matrix");
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n\n");
    
    
     Display(m);

    return 0;
}