#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

void printReverse(Node* head)
{
    if (head == NULL) return;
    printReverse(head->next);
    cout << head->value << " ";
}