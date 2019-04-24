#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node *next;
};

int a[10];

int main(void){
    int i = 0;
    struct Node *head, *temp;

    for(i = 0; i < 10; i++)
        a[i] = i;

    head = malloc(sizeof(struct Node));

    (*head).value = 10;
    (*head).next = NULL;

    printf("head.value = %d\n", (*head).value);
    printf("head.next = %p\n", (*head).next);


    

}