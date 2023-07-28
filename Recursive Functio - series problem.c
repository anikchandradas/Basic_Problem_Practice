#include <stdio.h>

int series(int n) {
    if(n==1){
        return 1;
    }
    return n+series(n-1);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d", series(n));
    return 0;
}
