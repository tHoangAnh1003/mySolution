#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

Node* convert(Node* head)
{
    if (head == NULL) return NULL;
    Node* fast = head, *slow = head;
    Node* prev_slow = NULL;
    while (fast != NULL) {
        prev_slow = slow;
        fast = fast->next->next;
        slow = slow->next;
    }

    Node* a = head, *b = slow;
    prev_slow->next = NULL;
    while (b != NULL) {
        Node* a2 = a->next;
        a->next = b;
        b = b->next;
        a = a->next;
        a->next = a2;
        a = a->next;
    }
    return head;
}