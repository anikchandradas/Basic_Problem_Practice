#include <stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n%i == 0){
            sum = sum + i;
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}

