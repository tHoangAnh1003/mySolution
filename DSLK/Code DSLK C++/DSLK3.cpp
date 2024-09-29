#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
};

node* makeNode(int x){
    //cap phat dong
    node *ptr = new node;
    //gan du lieu
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

void duyet(node *head){
    if(head == NULL){
        cout << "EMPTY\n";
    }
    while(head != NULL){
        //truy cap du lieu cua node head
        cout << head->data << ' ';
        //tu node hien => nhay ra node dung sau
        head = head->next; // i++
    }
    cout << endl;
}

void push(node *&stack, int x){
    node *newNode = makeNode(x);
    newNode->next = stack;
    stack = newNode;
}

void pop(node *&stack){
    if(stack == NULL) return;
    node *del = stack;
    stack = stack->next;
    delete del;
}


int main(){
    node *stack = NULL;
    int t; cin >> t;
    while(t--){
        string tt; cin >> tt;
        if(tt == "push"){
            int x; cin >> x;
            push(stack, x);
        }
        else if(tt == "pop"){
            pop(stack);
        }
        else{
            duyet(stack);
        }
    }
}