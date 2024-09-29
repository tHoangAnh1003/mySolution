#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

bool compareLists(Node* headA, Node* headB) {
    while (headA !=NULL && headB != NULL) {
        if (headA->value != headB->value) return false;
        headA = headA->next;
        headB = headB->next;
    }
    return headA == headB;
}