struct Node {
    int value;
    Node* next;
};

void print(Node* head) {
    while (head != NULL) {
        cout << head->value << ' ';
        head = head->next;
    }
}