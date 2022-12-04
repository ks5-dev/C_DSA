#include <stdio.h>

/* Explanation
x^n  = x^(n/2) * x^(n/2) when n % 2 == 0
x^n = x*(n/2) * x^(n/2) * x when n%2==1
*/

int binary_exponentation(int x, int n){
    int res = 1;
    while (n > 0)
    {
        if(n % 2 == 1){
            res = res * x;
        }
        x *= x;
        n /= 2;
    }
    return res;
}

int main(){
    int a = binary_exponentation(2,7);
    printf("2^7 is %d \n", a);
    return 0;
}