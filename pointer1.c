#include<stdio.h>

void addOne(int a){
    a++;
}

int main(void){
    int x = 10;

    printf("Value of x before: %d\n", x);
    addOne(x);
    printf("Value of x after: %d\n", x);
}