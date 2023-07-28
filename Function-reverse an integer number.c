#include <stdio.h>

int reverse(int n) {
    int rev=0, d;
    while(n) {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse = %d", reverse(num));
    return 0;
}
