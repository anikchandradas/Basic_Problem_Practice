// x + x^2 + x^3 + x^4 + . . . + x^n
#include <stdio.h>
#include <math.h>
int main()
{
    long long sum = 0;
    int i, n, x;

    printf("Enter the value of n and x: \n");
    scanf("%d%d", &n, &x);
    for(i = 1; i <= n; i++){
        sum = sum + pow(x,i);
    }
    printf("Summation = %lld", sum);
    return 0;
}
