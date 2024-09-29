#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

vector<int> linkedListToVector(Node* head)
{
    vector<int> ret;
    while (head) {
        ret.push_back(head->value);
        head = head->next;
    }
    return ret;
}

Node* vectorToLinkedList(const vector<int> &values, int i) {
    if (i >= int(values.size())) return NULL;
    Node* new_node = new Node();
    new_node->value = values[i];
    new_node->next = vectorToLinkedList(values, i+1);
    return new_node;
}

Node* vectorToLinkedList(vector<int> values)
{
    return vectorToLinkedList(values, 0);
}