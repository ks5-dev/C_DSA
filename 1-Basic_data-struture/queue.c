#include "stdlib.h"
#include "stdio.h"

#define QUEUE_SIZE 100
int queue[QUEUE_SIZE+1], head, tail;

void queueInit(){
    head = 0;
    tail = 0;
}

void put(int v){
    queue[tail++]= v;
    if (tail > QUEUE_SIZE){
        tail = 0;
    }
}

int get(){
    return queue[head++];
    if (head > QUEUE_SIZE){
        head = 0;
    }
}

int queueEmpty(){
    return head == tail;
}

int main(){
    queueInit();
    put(6);
    put(7);
    put(8);
    printf("Get: %d \n", get());
    printf("Get: %d \n", get());
    printf("Get: %d \n", get());
    if(queueEmpty){
        printf("Empty\n");
    }
}