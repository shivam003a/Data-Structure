#include<bits/stdc++.h>
using namespace std;

 
// Structure of the Stack
struct Stack{
    int size;
    int top;
    int *S;
};

// Function for creating the stack
void create(Stack *st){
    cout<<"Enter the Size\n";
    cin>>st->size;
    st->S = new int[st->size];
    st->top = -1;
}


// Function for displaying the stack
void display(Stack st){
    for(int i=st.top;i>=0;i--){
        cout<<st.S[i]<<" ";
    }
}

// Function for pushing element into stack
void push(Stack *st,int x){
    if(st->top==st->size-1){
        cout<<"Stack Overflow\n";
    }
    else{
        st->S[++(st->top)] = x;
    }
}


// Function for poping the element from stack
int pop(Stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"Stack Underflow\n";
    }
    else{
        x = st->S[st->top--];
    }
    return x;
}

// Function for getting value at specific index
int peek(Stack st,int index){
    int x=-1;
    if(st.top-index+1<0){
        cout<<"Invalind Index\n";
    }
    else{
        x = st.S[st.top-index+1];
    }
    return x;
}

// Function for ckecking whether stack is full or not
int isFull(Stack st){
    return st.top == st.size-1;
}

// Function for ckecking whether stack is empty or not
int isEmpty(Stack st){
    return st.top == -1;
}

// Function for getting element at the top of stack
int stackTop(Stack st){
    if(!isEmpty(st))
        return st.S[st.top];
    return -1;
}

// Driver Code;
int main(){
    Stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    pop(&st);
    pop(&st);
    cout<<stackTop(st)<<endl;

    display(st);
     

    return 0;
}