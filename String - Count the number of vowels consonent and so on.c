#include <stdio.h>
int main()
{
    char line[150];
    int i, vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;

    printf("Enter a string: ");
    gets(line);


    for(i = 0; line[i] != '\0'; ++i){
        if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' ||
           line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {
            ++vowels;
           }
           else if((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')){
               ++consonants;
           }
           else if(line[i] >= '0' && line[i] <= '9'){
              ++digits;
           }
           else if(line[i] == ' '){
               ++spaces;
           }
    }
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}
