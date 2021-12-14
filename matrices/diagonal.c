#include<stdio.h>
#include<stdlib.h>
struct Matrix {
    int *A;
    int n;
};

// for setting the values at location;
void set(struct Matrix *m,int i,int j,int x)
{
    if(i==j)
        m->A[i-1]=x;

}
//for getting the value from the loctaion
int get(struct Matrix m,int i ,int j)
{
    if(i==j)
        return m.A[i-1];
    else
        return 0;
}
//fpr diagonal matrix Display
void Display(struct Matrix m)
{
    int i;
    int j;
    for(i=0;i<m.n;i++)
    {   printf("\n");
        for(j=0;j<m.n;j++)
        {
            if(i==j)
            printf(" %d",m.A[i]);
            else
            printf(" 0");
        }
      
    }
}
int main()
{
   
    struct Matrix m;
    m.n =4;
    set(&m,1,1,5);
    set(&m,2,2,4);
    set(&m,3,3,6);
    set(&m,4,4,8);
    
     Display(m);

    return 0;
}