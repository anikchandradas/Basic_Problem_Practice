#include <stdio.h>

int fibo(int n) {
    if(n==1){
        return 0;
    }
    if(n==2 || n==3) {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n, i;
    printf("Enter the value: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++) {
        printf("%d ", fibo(i));
    }
    return 0;
}
