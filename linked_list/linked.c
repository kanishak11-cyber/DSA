#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node
{
    int data;
    struct Node *next;
}*first;

void  create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last =t;
    }
}
void Display(struct Node*p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void RDisplay(struct Node *p)
{
    printf("%d ",p->data);
    return;
    RDisplay(p->next);
}

int count(struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p)
{
    if(p!=NULL)
        return Rcount(p->next)+1;
    else 
        return 0; 
}


int sum(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Rsum(struct Node *p)
{
    if(p==NULL)
        return 0;
    else
        return Rsum(p->next)+p->data;
}


int Max(struct Node *p)
{
    int max=INT_MIN;
    while(p)
    {
        if(p->data>max)
        max=p->data;
        p=p->next;
    }
    return max;
}

int RMax(struct Node *p){
    int x=0;
    if(p==0)
        return INT_MIN;
        x=RMax(p->next);
        if(x>p->data)
        return x;
        else 
        return p->data;
    
}
void Insert(struct Node *p,int index, int x)
{   
    struct Node *t;
    int i;
    if(index<0||index>count(p))
    return;
    t= (struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else 
    {
        for(i=0;i<index-1;i++)
        p=p->next;
        t->next=p->next;
    }
}

void SortedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;
    t= (struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL) 
    first=t;
    else 
    {
        while(p && p->data<x)
        {
            q=p->next;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else 
        {
            t->next=q->next;
            q->next=t;
        }
    }
}
int Delete(struct Node *p,int index)
{
    struct Node *q=NULL;
    int x=-1,i;
    if(index<1||index>count(p))
        return -1;
    if(index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else{
        for(i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;

        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}

int isSorted(struct Node *p) {
    int x= -65536;
    while(p!=NULL)
    {
        if(p->data<x)
        return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

void RemoveDuplicate(struct Node *p){
    struct Node *q=p->next;
    while(q!=NULL){
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}
int main()
{
    
   int A[]={10,20,20,30,40,50,60};
   create(A,7);
//    SortedInsert(first,35);
    // Delete(first,5);
    // isSorted(first);
    RemoveDuplicate(first);
   Display(first);
  
    return 0;
}