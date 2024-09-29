#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

Node* concat(vector<Node*> heads)
{
    Node* head = NULL;
    for (int i=0, j=-1; i < int(heads.size()); ++i) {
        if (heads[i] == NULL) continue;
        if (j >= 0 && heads[j] != NULL) {
            while (heads[j]->next != NULL) heads[j]=heads[j]->next;
            heads[j]->next = heads[i];
        }
        if (head == NULL) head = heads[i];
        j=i;
    }
    return head;
}