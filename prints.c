#include<stdio.h>

int main(void){
    int x = 65;
    printf("Int: %d\n", x); // print signed integer
    printf("UInt: %u\n", x); // print unsigned integer
    printf("Long int: %ld\n", (long)x); // print long (signed) integer
    printf("Long uint: %lu\n", (unsigned long)x); // print long unsigned integer
    printf("Float: %f\n", (float)x); // print float
    printf("Double: %lf\n", (double)x); // print double

    char y = 0b100001;

    printf("Char: %c\n", y); // print character
    //printf("%s\n", x); // print string
}