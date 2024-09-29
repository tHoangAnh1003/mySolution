#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

typedef struct Node* pnode;

pnode makeNode(int x)
{
    pnode newNode = new Node;
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void PrintOut(pnode head)
{
    if(head == NULL) return;
    while(head != NULL){
        cout << head->data << ' ';
        head = head->next;
    }
}

void pushBack(pnode &head, int x)
{
    pnode newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    pnode tmp = head;
    while(tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void ReverseList(pnode &head)
{
   pnode curr = head, tmp = NULL;
   while(curr != NULL){
        curr->prev = curr->next;
        curr->next = tmp;
        tmp = curr;
        curr = curr->prev;
   }
   head = tmp;
}

int main()
{
    int n; cin >> n;
    pnode head = NULL;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        pushBack(head, x);
    }
    ReverseList(head);
    PrintOut(head);
}


