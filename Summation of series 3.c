// 1/1! + 2/2! + 3/3! + 4/4! + . . . . + n/n!
#include <stdio.h>
int main()
{
    long long fact = 1, i, n;
    double sum = 0;
    printf("Enter the value of n: \n");
    scanf("%lld", &n);
    for(i=1; i <= n; i++){
        fact=fact*i;
        sum += (double) i/fact;
    }
    printf("Summation = %llf", sum);
    return 0;
}
