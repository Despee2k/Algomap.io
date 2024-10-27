bool hasCycle(struct ListNode *head) {
    bool flag = false;
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(&(*slow) == &(*fast)){
            flag = true;
            fast = NULL;
        }
    }
    return flag;
}