#include <stdio.h>

int gcd(int a, int b) {
    int c;
    while(b%a){
        c=a;
        a=b%a;
        b=c;
    }
    return a;
}

int main()
{
    int a,b,x;
    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);
    x=gcd(a, b);
    printf("GCD: %d", x);
    return 0;
}
