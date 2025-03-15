#include<stdio.h>
int bansil(){
    int a = 50;
    int b = 96;
    int c = a + b;
    return c;
}

void main(){
    int c = bansil();
    printf("value of c is %d", c);
}