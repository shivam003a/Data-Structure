#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int size;
        int top;
        char *S;

    public:
        Stack(int n){ 
            size = n;
            S = new char[size];
            top = -1;
        }
        void push(int x);
        char pop();
        int isEmpty();
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

char Stack::pop(){
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

int Stack::isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}

bool isBalanced(string s,Stack st){
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(st.isEmpty()){
                    return false;
                }
                st.pop();
            }
        }
    }
    if(st.isEmpty()) return true;
    else return false;
}

int main(){
    string s = "((a+b)*(a+c))";
    Stack st(s.length());
    cout<<isBalanced(s,st)<<endl;

    return 0;
}