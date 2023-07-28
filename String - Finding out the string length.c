#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_length(char str[]){
    int i;
    for(i = 0; str[i] != '\0'; i++);
        return  i;
}

int main()
{
    char str[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    int length;
    length = string_length(str);
    printf("%d\n", length+1);
    return 0;
}
