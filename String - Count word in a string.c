#include <stdio.h>
int main()
{
    char s[200];
    int count = 0, i;

    printf("Enter String: \n");
    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            count++;
        }
    }
    printf("Number of word: %d\n", count+1);
    return 0;
}
