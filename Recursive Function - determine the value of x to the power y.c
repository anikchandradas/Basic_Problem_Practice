#include <stdio.h>

long power(int x, int y) {
    if(y==0) {
        return 1;
    }
    return x*power(x, y-1);
}

int main()
{
    int a,b;
    printf("Enter the value: ");
    scanf("%d %d", &a, &b);
    printf("Power = %ld", power(a,b));
    return 0;
}
