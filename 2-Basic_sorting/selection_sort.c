#include "stdio.h"
#include "stdlib.h"

void selectionSort(int a[], int N){
    int i,j, min, t;
    for(int i=0; i< N - 1; i++){
        min =i;
        for(int j = i+1; j < N; j++){
            if (a[j] < a[min]){
                // a[min] ... a[j]
                t = a[min];
                a[min] = a[j];
                a[j] = t;
                min = j;
            }
        }
    }
}

int main(){
    int a[10] = {1, 4, 2, 3, 7, 6, 15, 23, 13, 21};
    selectionSort(a, 10);
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    return 0;
} 