struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) return list2;
    else if (list2 == NULL) return list1;

    struct ListNode *trav = NULL;
    struct ListNode *newList;
    struct ListNode *temp;

    while (list1 != NULL && list2 != NULL) {
        if (trav != NULL) {
            for (; trav->next != NULL; trav = trav->next);
        }
        if (list1->val <= list2->val) {
            temp = list1;
            list1 = list1->next;
        } else {
            temp = list2;
            list2 = list2->next;
        }
        if (trav != NULL) {
            trav->next = temp;
            trav->next->next = NULL;
        } else {
            trav = temp;
            trav->next = NULL;
            newList = trav;
        }
    }

    if (list1 == NULL && list2 != NULL) {
        if (trav->next != NULL) {
            trav = trav->next;
        }
        trav->next = list2;
    }

    if (list2 == NULL && list1 != NULL) {
        if (trav->next != NULL) {
            trav = trav->next;
        }
        trav->next = list1;
    }

    return newList;
}