struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *newList = NULL;
    struct ListNode *temp;
    while(head != NULL){
        if(newList == NULL){
            newList = head;
            head = head->next;
            newList->next = NULL;
        }
        else {
            temp = head;
            head = head->next;
            temp->next = newList;
            newList = temp;
        }
    }

    return newList;
}