//1 + 2 + 3 + . . . + n
#include <stdio.h>
int main()
{
    int sum=0, i, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("Summation of the series is : %d", sum);
    return 0;
}
