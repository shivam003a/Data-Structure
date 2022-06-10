#include<bits/stdc++.h>
using namespace std;

struct cube{
    int length;
    int breadth;
};


int main(){
    
    cube a;
    cube *p = &a;
    // brackets around p due to highr=er precedence of dot operator
    (*p).length = 10;
    // Arrow operator to access the member of struct
    p->breadth = 20;

    cout<<p->length<<endl;
    cout<<(*p).breadth<<endl;


    cube *p1;
    // allocating memory in heap
    p1 = new cube;
    p1->length = 27;
    p1->breadth = 54;

    cout<<p1->length<<endl;
    cout<<(*p1).breadth<<endl;

    delete p1;
    

    return 0;
}