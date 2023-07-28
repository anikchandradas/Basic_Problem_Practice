#include <stdio.h>
int main()
{
    int f1=0, f2=1,  f, i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("0 1 ");
    for(i=1; i <= n-2; i++){
        f=f1+f2;
        printf("%d ", f);
        f1=f2;
        f2=f;
    }
    return 0;
}
