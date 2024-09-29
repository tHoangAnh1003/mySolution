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
}

void themcuoi(node *&head, int x){
    node *newNode = makeNode(x); 
    //di den node cuoi cung
    if(head == NULL){
        head = newNode; return;
    }
    node *temp = head; // NULL
    while(temp->next != NULL){ // loi bo nho
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteAll(node *&head, int x){
    while(head != NULL && head->data == x){
        node *del = head;
        head = head->next;
        delete del;
    }
    node *temp = head;
    node *prev = head;
    while(temp != NULL){
        if(temp->data == x){
            //xoa thang temp
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
}

int main(){
    node *head = NULL;
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        themcuoi(head, tmp);
    }
    deleteAll(head, x);
    duyet(head);
}