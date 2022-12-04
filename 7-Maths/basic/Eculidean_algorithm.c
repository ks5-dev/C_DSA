#include <stdio.h>

int gcd( int u , int v){
    int t;
    while (u > 0){
        if (u < v){
            t = u;
            u = v; // swap the values of u and t
            v = t;
        }
        u = u-v;
    }
}

int main(){
    printf("GCD of 120 and 428 is %d \n", gcd(120,428));
    return 0;
}