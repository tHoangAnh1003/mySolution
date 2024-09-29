#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv;
    string ten;
    double gpa;
};

struct node{
    SinhVien data;
    node *next;
};

node *makeNode(SinhVien x){
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data.msv << ' ' << head->data.ten << ' ' << fixed << setprecision(2) << head->data.gpa << endl;
        head = head->next;
    }
}

void themdau(node *&head, SinhVien x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void themcuoi(node *&head, SinhVien x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode; return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void themgiua(node *&head, SinhVien x, int k){
    node *newNode = makeNode(x);
    if(k == 1){
        themdau(head, x); return;
    }
    node *temp = head;
    for(int i = 1; i <= k - 2; i++){
        temp = temp->next;
    }
    //temp : k - 1
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(x == 1){
            string ma, ten; double gpa;
            cin >> ma;
            cin.ignore();
            getline(cin, ten);
            cin >> gpa;
            SinhVien x{ma, ten, gpa};
            themdau(head, x);
        }
        else if(x == 2){
            string ma, ten; double gpa;
            cin >> ma;
            cin.ignore();
            getline(cin, ten);
            cin >> gpa;
            SinhVien x{ma, ten, gpa};
            themcuoi(head, x);
        }
        else{
            int k; cin >> k;
            string ma, ten; double gpa;
            cin >> ma;
            cin.ignore();
            getline(cin, ten);
            cin >> gpa;
            SinhVien x{ma, ten, gpa};
            themgiua(head, x, k);
        }
    }
    duyet(head);
    return 0;
}