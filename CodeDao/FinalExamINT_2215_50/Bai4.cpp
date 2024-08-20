Node* setHead(Node* head) {
    if (!head || !head->next) return head;

    Node *prev = nullptr, *curr = head;
    while (curr && curr->next) {
        if (curr->value != head->next->value) {
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr == head) return head;

    if (prev) {
        prev->next = curr->next;
    }

    curr->next = head;
    head = curr;

    return head; 
}