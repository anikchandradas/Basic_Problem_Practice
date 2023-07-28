#include <stdio.h>
int main()
{
    int a, b, c, x, y, lcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x=a, y=b;
    while(a != 0) {
        c=b%a;
        b=a;
        a=c;
    }
    lcd = x*y/b;
    printf("L.C.D = %d", lcd);
    return 0;
}
