#ifndef LINKEDLIST_FUNCTIONS_H
#define LINKEDLIST_FUNCTIONS_H

// Function prototypes
struct Node;
struct Node* createNode(int data);
void printList(struct Node* head);
void insertSorted(struct Node** head, int data);
void deleteOccurrences(struct Node** head, int key);
void deleteAtPosition(struct Node** head, int position);
void insertAtBeginning(struct Node** head, int data);
void insertAtPosition(struct Node** head, int position, int data);
void insertAtEnd(struct Node** head, int data);
void deleteOccurrencesUnsorted(struct Node** head, int key);
void deleteAtPositionUnsorted(struct Node** head, int position);

#endif /* LINKEDLIST_FUNCTIONS_H */