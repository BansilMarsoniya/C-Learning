#include <stdio.h>

int main()
{
    // int length = 2;
    // int breadth = 4;
    int length, breadth;
    printf("Enter Length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("Your Area Of Rectangle is %d", length * breadth);
    return 0;
}