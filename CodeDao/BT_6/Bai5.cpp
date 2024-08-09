struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;

    SinglyLinkedListNode* mergedHead = nullptr;
    if (head1->data < head2->data) {
        mergedHead = head1;
        mergedHead->next = mergeLists(head1->next, head2);
    } else {
        mergedHead = head2;
        mergedHead->next = mergeLists(head1, head2->next);
    }

    return mergedHead;
}
