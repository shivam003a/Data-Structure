#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 20;

    // declaring and initializing the reference
    int &r = a;
    // referencing is just like giving another name to the variable


    cout<<a<<"  "<<r<<endl;

    // if we declare another variable 
    int b=25;
    r = b;

    cout<<b<<" "<<a<<" "<<r<<endl;


    return 0;
}