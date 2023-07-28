#include <stdio.h>

int series(int n) {
    int i, sum = 0;
    for(i = 1; i <= n; i++) {
        if(i%2) {
            sum=sum+i;
        }
        else{
            sum=sum-1;
        }
    }
    return sum;
}

int main()
{
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum=series(n);
    printf("Summation of the series = %d", sum);
    return 0;
}
