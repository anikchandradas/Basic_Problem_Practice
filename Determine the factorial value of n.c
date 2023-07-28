#include <stdio.h>
int main()
{
    long long fact = 1;
    int i, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("Factorial of %d = %lld", n, fact);
    return 0;
}
