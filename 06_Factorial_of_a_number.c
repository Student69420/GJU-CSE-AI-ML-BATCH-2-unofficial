#include <stdio.h>
int main() {
    int n = 4, i ,f = 1;
    for(i = 1; i<=n; i++) {
        f = f * i;
    
    }
    printf("Factorial of %d is %d", n, f);
    return 0;
}