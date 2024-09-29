#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

Node* extractNodes(Node* head, int threshold) 
{
    if (head == NULL) return NULL;
    if (head->value >= threshold) 
        return extractNodes(head->next, threshold);
    Node* new_node = new Node();
    new_node->value = head->value;
    new_node->next = extractNodes(head->next, threshold);
    return new_node;
}