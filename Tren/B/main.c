#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int id;
    struct Node* next;
} Node;

Node* create_circle(int N) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->id = 1;
    Node* curr = head;
    
    for (int i = 2; i <= N; i++) {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->id = i;

        curr->next = new_node;
        curr = new_node;
    }
    curr->next = head;
    return(head);
}

int main() {
    int mask = 3;

    Node* circle = create_circle(4);
    
    Node* curr = circle;
    Node* prev;

    int K = curr->id & mask;
    
    for (int i = 0; i < K; i++) {
    prev = curr;
    curr = curr->next;
    }

    printf("Delite node with id: %d\n", curr->id);

    prev->next = curr->next;
    free(curr);

    return(0);
}