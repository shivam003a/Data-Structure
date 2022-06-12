#include<bits/stdc++.h>
using namespace std;

// Structure of the node of LinkedList
struct Node{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

// Function for creating LinkedList
void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(i=1;i<n;i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int A[],int n){
    int i;
    struct Node *t,*last;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;
    for(i=1;i<n;i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function for displaying linkedList using loops
void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

// Function for displaying linkedList using Recursion
void RDisplay(Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

// Function for Counting no of Nodes
int count(Node *p){
    int count=0;
    while(p){
        count++;
        p = p->next;
    }
    return count;
}

// Function for Counting no of Nodes using Recursion
int Rcount(Node *p){
    if(p!=NULL){
        return Rcount(p->next)+1;
    }
    else{
        return 0;
    }
}

// Function for the Sum of element
int sum(Node *p){
    int sum=0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

// Function for the Sum of element using Recursion
int Rsum(Node *p){
    if(p){
        return Rsum(p->next) + p->data;
    }
    else{
        return 0;
    }
}

// Function For finding Max of List
int Max(Node *p){
    int maxx=p->data;
    while(p){
        maxx = max(maxx,p->data);
        p = p->next;
    }
    return maxx;
}

// Function For finding Max of List using Recursion
int RMax(Node *p){
    int x=0;
    if(p==0)
        return INT_MIN;
    x = RMax(p->next);
    return x>p->data?x:p->data;
}
// Function for Linear Search
Node * LinearSearch(Node *p,int key){
    while(p){
        if(key==p->data){
            return p;
        }
        p = p->next;
    }
    return NULL;
}

// Move to the front Linear Search
Node * ImLinearSearch(Node * p,int key){
    Node *q;
    while(p){
        if(key==p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

// Inserting in a linked list
void Insert(Node *p,int pos,int val){
    Node *t,*q;
    if(pos<0 || pos>count(first))
        return;
    q = new Node;
    q->data = val;
    if(pos==0){
         q->next = first;
         first = q;
    }
    else{
        for(int i=0;i<pos-1;i++){
            p = p->next;
        }
        q->next = p->next;
        p->next = q;
    }
}

// Function For Inserting Element in Sorted Position
void SortInsert(Node *p,int value){
    Node *t,*q;
    t = new Node;
    t->data = value;
    t->next = NULL;

    if(first==NULL){
        first = t;
    }else{
        while(p && p->data<value){
            q = p;
            p = p->next;
        }
        if(p==first){
            t->next = first;
            first = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }
}

// Function For Deleting the Node
int Delete(Node *p,int index){
    Node *q=NULL;
    int x=-1,i;
    if(index<0 || index>count(p)){
        return -1;
    }
    if(index==1){
        q = first;
        first = first->next;
        x = q->data;
        delete q;
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

// Function For Checking whether the list is Sorted or Not
int isSorted(Node *p){
    int x = INT_MIN;
    while(p){
        if(p->data<x){
            return false;
        }
        x = p->data;
        p = p->next;
    }
    return true;
}

// Function for removing duplicates
void RemoveDuplicates(Node *p){
    Node *q = p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

// Reversing the list using auxilliary array
void ReverseA(Node *p){
    int *a,i;
    a = new int[count(p)];

    Node *q = p;

    while(p!=NULL){
        a[i] = p->data;
        p = p->next;
        i++;
    }
    p = q,i--;
    while(p!=NULL){
        p->data = a[i--];
        p = p->next;

    }
}

// Reverse a list using changes in links
void reverse(Node *p){
    Node *r = NULL,*q=NULL;

    while(p!=NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

// Function for concatanation
void Concat(Node *p,Node *q){
    third = p;
    while(p->next!=NULL) 
        p=p->next;
    p->next = q;
}

// Merging of two list
void Merge(Node *p,Node *q){
    Node *last = NULL;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        last->next=NULL;
    }else{
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p) last->next = p;
    else last->next = q;
}

// Function for checking the loop 
bool checkLoop(Node *p){
    Node *q,*r;
    q = r = p;
    do{
        q = q->next;
        r = r->next;
        r = r!=NULL?r->next:NULL;
    }while(q && r && r!=q);
    if(q==r) return true;
    else return false;
}

// Driver Code
int main(){
    int A[] = {10,23,27,55,200};
    int B[] = {11,22,33,44,55};
    Node *p,*q;
    create(A,5);
    p = first->next->next;
    q = first->next->next->next->next;
    q->next = p;
    cout<<checkLoop(first);


    


    
    return 0;
}