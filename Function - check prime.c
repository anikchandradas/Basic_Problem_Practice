#include <stdio.h>

void check_prime(int n)
{
    int p=1, i;
    for(i=2; i*i <= n; i++) {
        if(n%i == 0) {
            p=0;
            break;
        }
    }
    if(p==1) {
        printf("%d is a prime number.", n);
    }
    else {
        printf("%d is not a prime number.". n);
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    check_prime(n);
    return 0;
}
