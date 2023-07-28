#include <stdio.h>

void divisor_print(int n) {
    int i;
    for(i=1; i <=n; i++) {
        if(n%i == 0) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n, i, count=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    divisor_print(n);
    return 0;
}
