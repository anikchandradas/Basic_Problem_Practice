#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[40];
};

int main()
{
    struct student one;
    printf("Enter your id: ");
    scanf("%d", &one.id);
    printf("Enter your name: ");
    scanf("%s", one.name);

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
