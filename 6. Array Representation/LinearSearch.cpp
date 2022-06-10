#include<bits/stdc++.h>
using namespace std;

// Structure of the array
struct Array{
    int A[10];
    int size;
    int length;
};

// Function for displaying the array
void display(Array a){
    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}

// Linear Search
int LinearSearch(Array a,int key){
    for(int i=0;i<a.length;i++){
        if(key==a.A[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    Array a{{2,3,4,6,11,9},10,6};

    cout<<LinearSearch(a,4);
    // display(a);
    

    return 0;
}