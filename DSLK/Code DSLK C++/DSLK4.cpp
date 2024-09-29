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

void push(node *&queue, int x){
    node *newNode = makeNode(x);
    if(queue == NULL){
        queue = newNode; return;
    }
    node *temp = queue;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void pop(node *&queue){
    if(queue == NULL) return;
    node *del = queue;
    queue = queue->next;
    delete del;
}

void front(node *queue){
    if(queue == NULL){
        cout << "EMPTY\n";
    }
    else{
        cout << queue->data << endl;
    }
}

int main(){
    node *queue = NULL;
    int t; cin >> t;
    while(t--){
        string tt; cin >> tt;
        if(tt == "push"){
            int x; cin >> x;
            push(queue, x);
        }
        else if(tt == "pop"){
            pop(queue);
        }
        else{
            front(queue);
        }
    }
}