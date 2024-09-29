#include <bits/stdc++.h>

using namespace std;

struct node{
    string data;
    int tansuat;
    node *next;
};

node* makeNode(string data, int tansuat){
    //cap phat dong
    node *ptr = new node;
    //gan du lieu
    ptr->data = data;
    ptr->tansuat = tansuat;
    ptr->next = NULL;
    return ptr;
}

void duyet(node *head){
    while(head != NULL){
        //truy cap du lieu cua node head
        cout << head->data << ' ' << head->tansuat << endl;
        //tu node hien => nhay ra node dung sau
        head = head->next; // i++
    }
    cout << endl;
}

void them(node *&head, string x){
    node *temp = head;
    node *prev = temp;
    while(temp != NULL){
        if(temp->data == x){
            temp->tansuat += 1;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    node *newNode = makeNode(x, 1);
        if(prev == NULL){
        head = newNode; return;
    }
    prev->next = newNode;
}

int main(){
    node *head = NULL;
    string s; while(cin >> s){
        them(head, s);
    }
    duyet(head);
}