#include<bits/stdc++.h>
using namespace std;

int main(){
    // int x = 200;
    // int *p;
    // p = &x;

    // cout<<"address "<<p<<endl;
    // cout<<"value "<<*p<<endl; // Dereferencing

    //-------------------------------------------------------------------------------------------

    // Operation on Array

    int arr[10] = {2,6,3,8,3,6,8,4,7,10};
    int *s;
    s = arr;

    // for(int i=0;i<10;i++){
    //     cout<<s[i]<<endl;
    // }

    for(int i=0;i<10;i++){
        cout<<*(arr+i)<<endl;
    }

    return 0;
}