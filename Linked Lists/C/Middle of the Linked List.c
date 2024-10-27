struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}