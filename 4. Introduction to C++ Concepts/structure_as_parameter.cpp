#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(Rectangle *r1){
    r1->length = 25;
    cout<<r1->length<<" "<<r1->breadth<<endl;

}


int main(){
    Rectangle r{20,10};
    
    cout<<r.length<<" "<<r.breadth<<endl<<endl;
    fun(&r);


    return 0;
}