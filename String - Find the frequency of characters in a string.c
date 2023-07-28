#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, frequency = 0;

    printf("Enter a string: ");
    gets(str);

    printf("\nEnter a character to find the frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; ++i){
        //printf("%d\n", i);
        if(ch == str[i]) {
            ++frequency;
            //printf("ch: %c, i: %d, frquency: %d\n\n", ch, i, frequency);
        }
    }
    printf("\nFrequency of %c = %d\n", ch, frequency);
    return 0;
}
