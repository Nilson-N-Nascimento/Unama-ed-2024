#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void ListaReversa (struct Node** head_ref) {
    struct Node *prev = NULL, *current = *head_ref, *next;
    while (current) {
        next = current->next;     
        current->next = prev;     
        prev = current;           
        current = next;
}
    *head_ref = prev;             
}
void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
struct Node* newNode(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    printf("Lista original: ");
    printList(head);

    ListaReversa(&head);             

    printf("Lista invertida: ");
    printList(head);
    return 0;
}

