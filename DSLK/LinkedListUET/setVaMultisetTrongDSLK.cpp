#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

Node* deleteDuplicates(Node* head)
{
    if (head == NULL) return head;
    for (Node* it = head; it != NULL; it=it->next) {
        while (it->next && it->next->value == it->value) {
            Node* tmp = it->next;
            it->next = tmp->next;
            delete tmp;
        }
    }
    return head;
}

Node* insert(Node* head, int value)
{
    if (head != NULL && head->value < value) {
        head->next = insert(head->next, value);
        return head;
    }
    Node* new_node = new Node();
    new_node->value = value;
    
    if (head == NULL) return new_node;
    new_node->next = head;
    return new_node;
}