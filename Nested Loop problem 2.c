#include <stdio.h>
int main()
{
    int i, j, k, mul=1;
    for(i=1; i < 4; i++){
        for(j=1; j <= i; j++){
            for(k=1; k < j; k++){
                mul = mul*i*j*k;
            }
        }
    }
    printf("Result: %d", mul);
    return 0;
}
