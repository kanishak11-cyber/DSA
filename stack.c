#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 5
int top = -1;
int stack_arr[MAX];
void push(){
    int item;
    if(top == MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter the item to be pushed\n");
    scanf("%d",&item);
    top = top + 1;
    stack_arr[top] = item;
    printf("%d pushed to stack\n",item);
}
void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    printf("%d popped from stack\n",stack_arr[top]);
    top = top - 1;
}
void display(){
    int i;
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack is:\n");
    for(i=top;i>=0;i--){
        printf("%d\n",stack_arr[i]);
    }
}

void main() {
    int choice ;
    while(1) {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                push();
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
                printf("Invalid choice");
        }
    }
}