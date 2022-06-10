#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(Rectangle *r,int length,int breadth){
    r->length = length;
    r->breadth = breadth;
}
int area(Rectangle r){
    return r.length*r.breadth;
}
void changeLength(Rectangle *r,int length){
    r->length = length;
}


int main(){

    Rectangle r1;
    initialize(&r1,10,20);
    cout<<"Area of Rectangle is "<<area(r1)<<endl;

    changeLength(&r1,30);
    cout<<"Area of Rectangle after length change is "<<area(r1)<<endl;
    

    return 0;
}