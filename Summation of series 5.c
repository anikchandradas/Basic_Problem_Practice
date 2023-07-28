// 1/2 + 1/3 + 1/4 + . . . . . 1/n
#include <stdio.h>
int main()
{
    int i, n;
    float sum = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for(i = 2; i <= n+1; i++){
        sum += (float)1/i;
    }
    printf("Summatiion = %f", sum);
    return 0;
}
