#include <stdio.h>
#include <math.h>

float triangle(int a, int b, int c) {
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main()
{
    int a,b,c;
    float area;
    printf("Enter the value of a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b > c && b+c > a && c+b > b) {
        printf("The area is = %f", triangle(a,b,c));
    }
    else {
        printf("The triangle is impossible.");
    }
    return 0;
}
