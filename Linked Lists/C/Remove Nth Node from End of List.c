struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode** left = &head;
    struct ListNode** right = &head;
    for(; *right != NULL;){
        while(n > 0){
            n--;
            right = &(*right)->next;
        }
        if(n == 0 && *right != NULL){
            right = &(*right)->next;
            left = &(*left)->next;
        }
    }
    struct ListNode *temp = *left;
    *left = temp->next;
    free(temp);
    return head;
}