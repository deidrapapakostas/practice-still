#include<stdio.h>

void addOne(int a){
    a++;
}

int main(void){
    int x = 10;
    int *y = &x;

    printf("The value of x is: %d\n", x);
    printf("The address of x is %p\n\n", &x);

    printf("The address stored in pointer y is: %p\n", y);
    printf("The address of y is: %p\n", &y);
    printf("The value that is pointed at by y is: %d\n", *y);

    // addOne(&x);

}