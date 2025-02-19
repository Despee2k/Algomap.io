/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

 struct Node* copyRandomList(struct Node* head) {
    if (!head) return NULL;
    
    struct Node* curr = head;
    while (curr) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->val = curr->val;
        newNode->next = curr->next;
        newNode->random = NULL;
        curr->next = newNode;
        curr = newNode->next;
    }
    
    curr = head;
    while (curr) {
        if (curr->random) {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }
    
    struct Node* newHead = head->next;
    struct Node* copy = newHead;
    curr = head;
    
    while (curr) {
        curr->next = copy->next;
        curr = curr->next;
        if (curr) {
            copy->next = curr->next;
            copy = copy->next;
        }
    }
    
    return newHead;
}