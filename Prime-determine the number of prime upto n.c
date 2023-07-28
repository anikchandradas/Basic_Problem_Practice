#include <stdio.h>
int main()
{
    int n, i, j, p, count=0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(i=2; i <= n; i++){
        p=1;
        for(j=2; j*j <= i; j++){
            if(i%j == 0) {
                p=0;
                break;
            }
        }
        if(p==1) {
            count++;
        }
    }
    printf("Number of prime number upto %d are %d.", n, count);
    return 0;
}
