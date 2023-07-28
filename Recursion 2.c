#include <stdio.h>

void recurse(int count) {
    if(count > 10) {
        return;
    }
    printf("Count = %d\n", count);
    recurse(count+1);
}

int main()
{
    recurse(1);
    return 0;
}
