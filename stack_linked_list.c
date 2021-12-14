#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
} *top=NULL;
void main()
{
    int choice,data;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the data to be pushed\n");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }
}
void push(int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=top;
    top=temp;
}
void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    temp=top;
    top=top->next;
    printf("Popped element is %d\n",temp->data);
    free(temp);
}
void display()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack is:\n");
    for(temp=top;temp!=NULL;temp=temp->next)
    {
        printf("%d\n",temp->data);
    }
}
// Output: