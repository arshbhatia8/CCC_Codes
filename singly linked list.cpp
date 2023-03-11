Singly Linked List, remove node greater than x: SinglyLinkedListNode* removeNodes(SinglyLinkedListNode* listHead, int x) {
    SinglyLinkedListNode* current = listHead;
    SinglyLinkedListNode* previous = nullptr;
    
    while (current != nullptr) {
        if (current->data > x) {
            // remove the current node
            if (previous == nullptr) {
                // current node is the head of the list
                listHead = current->next;
            } else {
                previous->next = current->next;
            }
            SinglyLinkedListNode* to_delete = current;
            current = current->next;
            delete to_delete;
        } else {
            // move to the next node
            previous = current;
            current = current->next;
        }
    }
    
    return listHead;
}
