#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head;

void create(int A[],int n){
    Node *t,*last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for(int i=1;i<n;i++){
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(Node *p){
    
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=head);
}

int count(Node *p){
    int count=0;
    do{
        count++;
        p = p->next;
    }while(p!=head);
    return count;
}

void insert(Node *p,int index,int x){
    Node *t;
    if(index<0 && index>count(p))
        return;
    if(index==0){
        t = new Node;
        t->data = x;
        if(head==NULL){
            head = t;
            head->next = head;
        }
        else{
            while(p->next!=head){
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else{
        t = new Node;
        t->data = x;
        for(int i=0;i<index-1;i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
    
}

int deleteNode(Node *p,int index){
    int x = -1;
    if(index<0 && index>count(p))
        return x;
    
    if(index==1){
        while(p->next!=head){
            p = p->next;
        }
        if(p==head){
            x = head->data;
            delete head;
            head = NULL;
        }
        else{
            p->next = head->next;
            x = head->data;
            delete head;
            head = p->next;
        }
    }
    else{
        Node *q;
        for(int i=0;i<index-2;i++){
            p = p->next;
        }
        q = p->next;
        x = q->data;
        p->next = q->next;
        delete q;

    }
    return x;
}

int main(){
    int A[] = {2,6,4,7,5,8};
    create(A,6);
    display(head);
    cout<<endl;
    cout<<deleteNode(head,1);
    cout<<endl;
    display(head);
    

    return 0;
}