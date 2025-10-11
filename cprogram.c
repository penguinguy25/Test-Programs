// nodes and shit
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    // create da nodes, feed them some yummy memory
    struct Node* node1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*) malloc(sizeof(struct Node));

    node1->data = 15;
    node2->data = 16;
    node3->data = 21;

    // fuck uh pointers shit idk
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    // ^^^ now you see, this last node points to nothing because its the last node and we dont want it to point to anything


    // printing the nodes
    printf("node1 uhhh %d (next is %p)\n", node1->data, node1->next);
    printf("node1 uhhh %d (next is %p)\n", node2->data, node2->next);
    printf("node1 uhhh %d (next is %p)", node3->data, node3->next);



    // bye nodes
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
