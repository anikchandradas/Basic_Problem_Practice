//1^2 + 2^2 + 3^2 + 4^2 + . . . n^2
#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + (i*i);
    }
    printf("Sum of the series is: %d\n", sum);
    return 0;
}
