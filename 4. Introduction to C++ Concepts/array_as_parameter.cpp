#include<bits/stdc++.h>
using namespace std;

void fun(int *a,int size){

    // for each loop can not be applied for pointers
    // for(auto x: a){
    //     cout<<x<<" ";
    // }
    cout<<"Printing of array with user function\n"; // This gives wrong size of array. it gives 
    // size of pointer divided by size of integer. That is 8/4=2

    cout<<"Size using user fuction "<<sizeof(a)/sizeof(int)<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

}

int main(){
    
    int a[] = {2,3,6,3,6,3,6};
    int n = 7;
    cout<<"Printing of array without user function\n";
    cout<<"Size using main fuction "<<sizeof(a)/sizeof(int)<<endl;
    for(auto x : a){
        cout<<x<<" ";
    }
    cout<<endl<<endl;
    fun(a,n);


    return 0;
}