#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    c = a%b;
    printf("%d mod %d = %d", a, b, c);
    return 0;
}
