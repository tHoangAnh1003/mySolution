#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int value;
    Node* next;
};

void print(Node* head)
{
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}

Node* insertHead(Node* head, int value)
{
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = head;
    return new_node;
}

Node* insertTail(Node* head, int value)
{
    Node* new_node = new Node();
    new_node->value = value;
    if (head == NULL) return new_node;
    Node* i = head;
    for (; i->next != NULL; i=i->next);
    i->next = new_node;
    return head;
}

Node* deleteNode(Node* head, int pos)
{
    if (pos == 0) {
        Node* next = head->next;
        delete head;
        return next;
    }
    Node* i = head;
    while (--pos) i = i->next;
    Node* deleted = i->next;
    i->next = deleted->next;
    delete deleted;
    return head;
}

int getValue(Node* head, int pos)
{
    while (pos--) head = head->next;
    return head->value;
}