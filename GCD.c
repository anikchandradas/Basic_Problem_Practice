#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(a%b != 0){
        c=b;
        b=a%b;
        a=c;
    }
    printf("GCD = %d", b);
    return 0;
}
