#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

#define stack_size 100 // Implementing with an array allows us to define a stack size

int stack[stack_size+1], i; // i is for the last index of the array, which is how push() and pop() work

void stackInit(){
    i = 0;
}

void push (int v){
    stack[i++] = v; // Further increase the index
}

int pop (){
    return stack[--i]; // Note that the value of i is minus for 1 before indexing
}

bool stackEmpty(){
    return !i;
}

int main(){
    stackInit();
    push(5);
    push(7);
    push(8);
    pop();
    pop();
    printf("The value that has just got popped after pop is %d \n", pop());
    // pop();
    printf("Check if the stack is empty, %d \n", stackEmpty);
    return 0;
}