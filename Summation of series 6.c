// 1 - 2 + 3 - 4 + . . . . + n = ?
#include <stdio.h>
int main()
{
    int sum = 0, i, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for(i=1; i <= n; i++){
        if(i%2){
            sum = sum + i;
        }
        else{
            sum = sum - i;
        }
    }
    printf("Summatiion of the series is %d.", sum);
    return 0;
}
