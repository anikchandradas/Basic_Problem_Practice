#include <stdio.h>
int main()
{
    int i, j, mul=1;
    for(i=1; i < 4; i++){
        for(j = 1; j <= i; j++){
            mul = mul * i * j;
        }
    }
    printf("Result: %d", mul);
    return 0;
}
