#include <stdio.h>
int main()
{
    char s[200];
    int space = 0, i;

    printf("Enter string: \n");
    gets(s);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' '){
            space++;
        }
    }
    printf("Number of spaces: %d\n", space);
    return 0;
}
