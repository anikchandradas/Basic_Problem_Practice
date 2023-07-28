#include<stdio.h>
#include <stdlib.h>

int string_length(char str[]){
    int i;
    for(i = 0; str[i] != '\0'; i++);
        return  i;
}

int main()
{
    char str1[]="Bangla", str2[]="desh", str3[12];
    int i, j, len1 = 6, len2 = 4;

    for(i = 0, j = 0; i < len1; i++, j++){
        str3[j] = str1[i];
    }

    for(i = 0; i < len2; i++, j++){
        str3[j] = str2[i];
    }

    str3[j] = '\0';
    printf("%s\n", str3);
    return 0;
}
