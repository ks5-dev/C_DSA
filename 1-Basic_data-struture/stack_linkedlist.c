#include "stdio.h"
#include "stdlib.h"

// This implementation of the stack data structure is based on linked list
// push() and pop() operation are defined here
struct node{
    int key;
    struct node* next;
};

// Head is always the first element, z is placeholder for the last
struct node *head, *z, *t, *x;

void stackInit(){
    head = (struct node *) malloc (sizeof *head);
    z = (struct node *) malloc (sizeof *z);
    head->next = z;
    head->key = 0;
    z->next = z; // We know that a list has been traversed entirely when z->next == z
}

// Push() operation is defined by creating a placeholder node x then linked it after head. It is like insertafter(head)
void push(int v){
    x = (struct node *) malloc (sizeof *t);
    x->key = v;
    x->next = head->next; // This is the way that these elements get chained together
    head->next = x;
}

// Create a placeholder node called "x"
// We assign v the value for the key of x
// Free t as it is out of usage
int pop()
{
    int v;  // This variable hold the value of the popped element
    t = head->next;
    v = t->key;
    head->next = t->next; // This is similar to deleteNext()
    free(t);
    return v;
}

// We initialize the stack with setting z is linked after head
int stackEmpty(){
    return (head->next == z );
}

int main(){
    stackInit();
    push(5);
    push(7);
    push(8);
    printf("The value that has just got popped after pop is %d \n", pop());
    printf("The value that has just got popped after pop is %d \n", pop());
    return 0;
}
