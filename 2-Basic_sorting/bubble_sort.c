#include "stdio.h"
#include "stdlib.h"

// To simplify, compare two elements (a bubble) each time until done.
void bubbleSort(int a[], int N){
    int i, j, t;
    
    // 2 pointers, i goes down while j goes up
    for(i = N; i >= 1; i--){
        for(j = 1; j <= i; j++){
            
            // Swapping operation
            if (a[j-1] > a[j]){
                t =a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }

        }
    }
}
int main(){
    int a[10] = {1, 4, 2, 3, 7, 6, 15, 23, 13, 21}; // a[10] = 0 
    bubbleSort(a, 10);
    for(int i =1; i< 11;i ++){
        printf("%d ", a[i]);
    }
    //printf("%d \n", a[0]);
}