#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;

    struct node* next;
};

typedef struct node node_t;


int main(void){
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    array[5] = 6; // you can add on to an array once declared
    array[6] = 7;
    int x = array[0]; // assign array value to a variable
    //array[1] = 8; modifies old value of 1
    printf("%d %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], x);
    // adding into the center of this array would be a huge pain, lets try a linked list

    //Linked List
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    // link them up
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;
    // (Head)n3 -> n2 -> n1(Tail)
    return 0;
}

