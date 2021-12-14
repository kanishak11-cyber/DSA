#include<stdio.h>
#include<stdlib.h>
struct Element{
    int i;
    int j;
    int x;
};
struct Sparse{
    int m;
    int n;
    int num;
    struct Element *e;
};
void create(struct Sparse *s)
{
    printf("enter Dimensions");
    scanf("%d%d",&s->m,&s->n);
    printf("enter the no. of non-zeroes ");
    scanf("%d",&s->num);
    s->e=(struct Element *)malloc(s->num*sizeof(struct Element));
    printf("non-zero elements");
    for(int i=0; i<s->num; i++)
    scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
}
void display(struct Sparse s) {
int i,j,k=0;
for(i=0;i<s.m;i++)
{
    for(j=0;j<s.n;j++)
    {
        if(i==s.e[k].i && j==s.e[k].j)
        printf("%d ",s.e[k++].x);
        else
        printf("0 ");
    }
    printf("\n");
} 
}
struct Sparse* add(struct Sparse *s1,struct Sparse *s2){
    struct Sparse *sum;
    int i,j,k;
    i=j=k=0;
    sum=(struct Sparse *)malloc(sizeof(struct Sparse)); 
    sum->e=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));

    while(i<s1->num && j<s2->num)
    {
        if(s1->e[i].i<s2->e[j].i)
            sum->e[k++]=s1->e[i++];
        else if (s1->e[i].i>s2->e[j].i)
            sum->e[k++]=s2->e[j++];
        else
        {
            if(s1->e[i].j<s2->e[j].j)
                sum->e[k++]=s1->e[i++];
            else if(s1->e[i].j>s2->e[j].j)
                sum->e[k++]=s2->e[j++];
            else{
                sum->e[k]=s1->e[i];
                sum->e[k++].x=s1->e[i++].x+s2->e[j++].x;
            }
        }

    }
    for(;i<s1->num;i++) sum->e[k++]=s1->e[i];
    for(;j<s2->num;j++) sum->e[k++]=s2->e[j];
    sum->m=s1->m;
    sum->n=s2->n;
    sum->num=k;

    return sum;
}

int main()
{
    struct Sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);
    printf("First Matrix\n");
    display(s1);
    printf("Second Matrix\n");
    display(s2);
    printf("Sum of both Matrix \n");
    display(*s3);     
    return 0;
}