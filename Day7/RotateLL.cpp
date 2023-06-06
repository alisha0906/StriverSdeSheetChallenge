ListNode* rotateRight(ListNode* head, int k) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    if (k == 0) {
        return head;
    }
    
    ListNode* temp = head;
    int count = 1; // Start count at 1 since head is not NULL
    
    while (temp->next != NULL) {
        count++;
        temp = temp->next;
    }

    if (k % count == 0) {
        return head;
    }
    
    temp->next = head; // Connect the tail to the head to form a circular list
    
    int rotateSteps = count - (k % count);
    temp = head;
    
    for (int i = 0; i < rotateSteps - 1; i++) {
        temp = temp->next;
    }
    
    head = temp->next;
    temp->next = NULL;
    
    return head;
}

