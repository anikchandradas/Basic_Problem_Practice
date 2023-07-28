#include <stdio.h>
int main()
{
    int n, i, p=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=2; i*i < n; i++) {
        if(n%i == 0) {
            p=0;
            break;
        }
    }
    if(p==1) {
        printf("%d is a prime number.", n);
    }
    else{
        printf("%d is not a prime number.", n);
    }

    return 0;
}
