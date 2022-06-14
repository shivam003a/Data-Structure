#include<bits/stdc++.h>
using namespace std;

// Class of the Node
class Node{
    public:
        int data;
        Node *next;
};

// CLass for Stack
class Stack{
    private:
        Node *top;
    public:
        Stack(){ top = NULL; }
        void display();
        void push(int x);
        int pop();
        int peek(int pos);
        int isFull();
        int isEmpty();
        int stackTop();
};

// Function for Displaying the stack
void Stack::display(){
    Node *p = top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

// Function for Pushing element
void Stack::push(int x){
    Node *t = new Node;
    if(t==NULL){
        cout<<"Stack Overflow\n";
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

// Function for removing last element
int Stack::pop(){
    int x = -1;
    if(top==NULL){
        cout<<"Stack Underflow\n";
    }
    else{
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}

// Function for getting value at specific index
int Stack::peek(int pos){
    int i;
    Node *p = top;
    for(i=0;p!=NULL && i<pos-1;i++){
        p = p->next;
    }
    if(p!=NULL){
        return p->data;
    }
    else{
        return -1;
    }
}

// Function for checking whether stack is full or not

// Here we try to create a new node if node is created them
// stack is not full but if new Node t is not created and is NULL
// then stack is full
int Stack::isFull(){
    Node *t = new Node;
    if(t==NULL){
        return 1;
    }
    return 0;
}

// Function for checking whether stack is empty or not
int Stack::isEmpty(){
    if(top==NULL){
        return 1;
    }
    return 0;
}

// Function for getting top element
int Stack::stackTop(){
    if(top!=NULL){
        return top->data;
    }
    return -1;
}


int main(){
    Stack st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    st.display();

    st.pop();
    st.pop();

    st.display();
    cout<<st.peek(2);
    

    return 0;
}