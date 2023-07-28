#include <stdio.h>

int gcd(int a, int b){
    if(b%a == 0) {
        return a;
    }
    return gcd(b%a, a);
}

int main()
{
    int a, b;
    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);
    printf("gcd = %d", gcd(a,b));
    return 0;
}
