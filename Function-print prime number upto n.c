#include <stdio.h>

void prime_print(int n) {
    int i, j, p;
    for(i=2; i <= n; i++) {
        p=1;
        for(j=2; j*j <= i; j++) {
            if(i%j==0) {
                p=0;
                break;
            }
        }
        if(p==1) {
            printf("%d ", i);
        }
    }
}


int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    prime_print(n);
    return 0;
}
