#include "stdio.h"
#include "stdlib.h"

// The linked list will contain elements of type nodes.
// Each node has a value and a pointer to the next node
struct node{
    int key;
    struct node* next;
};

// Head is always the first element, z is always the last
struct node *head, *z, *t;

void linkedlistInit(){
    head = (struct node *) malloc (sizeof *head);
    z = (struct node *) malloc (sizeof *z);
    head->next = z;
    head->key = 0;
    z->next = z; // We know that a list has been traversed entirely when z->next == z
}

// No element points t->next anymore
void deleteNext(struct node *t)
{
    t->next = t->next->next;
}

// Create a placeholder node called "x"
// We assign the value for the key of x
struct node *insertafter(int v, struct node *t)
{
    struct node *x;
    x = (struct node *) malloc (sizeof *x);
    x->key = v;
    x->next = t->next;
    t->next = x;
    return x;
}

void traverse(struct node* t)
{
    int countElement = 1; // Counting head as the first 
    while (t != t->next) // See the comment of line 18
    {
        t = t->next; // Overall this is the basic way to traverse a list
        printf("The traversed node has the key of: %d \n", t->key);
        countElement++;
    }
    printf("The number of elements in this linked list is: %d \n", countElement);
    
}

int main(){
    linkedlistInit();
    insertafter(1, head);
    insertafter(2, head);
    insertafter(3, head);
    insertafter(4, head);
    deleteNext(head);
    traverse(head);
    return 0;
}
