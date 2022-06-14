#include<bits/stdc++.h>
using namespace std;


// ------------------------------Class for Stack------------------------------------------
class Stack{
    private:
        int size;
        int top;
        int *S;

    public:
        Stack(int n){ 
            size = n;
            S = new int[size];
            top = -1;
        }
        void push(int x);
        int pop();
        void display();
        int isFull();
        int isEmpty();
        int peek(int pos);
        int stackTop();
};

void Stack::push(int x){
    if(top == size-1){
        cout<<"Stack Overflow";
    }
    else{
        top++;
        S[top] = x;
    }
}

int Stack::pop(){
    int x = -1;
    if(top==-1){
        cout<<"Stack Underflow";
    }
    else{
        x = S[top];
        top--;
    }
    return x;
}

void Stack::display(){
    for(int i=top;i>=0;i--){
        cout<<S[i]<<" ";
    }
    cout<<endl;
}

int Stack::isFull(){
    if(top==size-1){
        return 1;
    }
    return 0;
}

int Stack::isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}

int Stack::peek(int pos){
    int x =-1;
    if(top-pos+1<0){
        cout<<"Invalid Index\n";
    }
    else{
        x = S[top-pos+1];
    }
    return x;
}

int Stack::stackTop(){
    if(!isEmpty()){
        return S[top];
    }
    return -1;
}

//------------------------------End of Class---------------------------------------------


int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.pop();
    cout<<st.stackTop();
    cout<<endl;
    st.display();
    

    return 0;
}