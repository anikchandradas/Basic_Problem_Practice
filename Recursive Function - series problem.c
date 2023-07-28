#include <stdio.h>

int add(int n) {
    if(n==1) {
        return 1;
    }
    return n+add(n-1);
}

int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    printf("%d", add(n));
    return 0;
}
