struct ListNode* deleteDuplicates(struct ListNode* head) {
    int store = -999;
    for(struct ListNode **trav = &head; (*trav) != NULL; ) {
        if((*trav)->val == store){
            struct ListNode* temp = *trav;
            *trav = (*trav)->next;
            free(temp);
        }
        else {
            store = (*trav)->val;
            trav = &(*trav)->next;
        }
    }

    return head;
}