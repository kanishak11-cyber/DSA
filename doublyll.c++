#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *list = NULL;

struct node *even = NULL;

struct node *odd = NULL;

struct node *current = NULL;

void insert(int data)
{
    // Allocate memory for new node;
    struct node *link = (struct node *)malloc(sizeof(struct node));

    link->data = data;
    link->prev = NULL;
    link->next = NULL;

    // If head is empty, create new list
    if (data % 2 == 0)
    {
        if (even == NULL)
        {
            even = link;
            return;
        }
        else
        {
            current = even;

            while (current->next != NULL)
                current = current->next;

            // Insert link at the end of the list
            current->next = link;
            even_last = link;
            link->prev = current;
        }
    }
    else
    {
        if (odd == NULL)
        {
            odd = link;
            return;
        }
        else
        {
            current = odd;

            while (current->next != NULL)
                current = current->next;

            // Insert link at the end of the list
            current->next = link;
            odd_last = link;
            link->prev = current;
        }
    }
}

void printList(struct node *head) {
   struct node *ptr = head;

   printf("\n[head] <=>");
   //start from the beginning
   while(ptr != NULL) {        
      printf(" %d <=>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [last]\n");
}
void combine() {
   struct node *link;

   list = even;
   link = list;

   while(link->next!= NULL) {
      link = link->next;
   }

   link->next = odd;
   odd->prev = link;

   // assign link_last to last node of new list

    
}

int main() {
   int i;

   for(i = 1; i <= 10; i++)
      insert(i);

   printf("Even : ");
   printList(even);
   sorted(even);


   printf("Odd  : ");
   printList(odd);
    sorted(odd);


   combine();

   printf("Combined List :\n");
   printList(list);


   sorted(combine());

   return 0;
}