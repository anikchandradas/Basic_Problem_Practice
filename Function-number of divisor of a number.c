#include <stdio.h>

int number_of_divisor(int n) {
    int i, count=0;
    for(i = 1; i*i <= n; i++) {
        if(!(n%i)) {
            if(i == n/i) {
                count++;
            }
            else {
                count+=2;
            }
        }
    }
    return count;
}

int main()
{
    int n, count;
    printf("Enter the number: ");
    scanf("%d", &n);
    count=number_of_divisor(n);
    printf("The number of divisor of %d is : %d", n, count);
    return 0;
}
