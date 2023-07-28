#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char country[11] = {'B', 'a', 'N', 'g', 'l', 'A', 'd', 'e', 's', 'H', '\0'};
    int i, length;
    printf("%s\n", country);
    length = 10;

    for(i = 0; i < length; i++){
        if(country[i] >= 65 && country[i] <= 90){
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s\n", country);
    return 0;
}

