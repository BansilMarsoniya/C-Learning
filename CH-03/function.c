#include<stdio.h>
int bansil(int a, int b){
    
    int c = a + b;
    return c;
}

void main(){
    int c = bansil(50, 96);
    int d = bansil(25, 25);
    printf("value of c is %d and value of d is %d", c, d);
}