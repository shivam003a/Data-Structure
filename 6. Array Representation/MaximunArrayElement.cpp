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

int Max(Array a){
    int maximum = a.A[0];
    for(int i=0;i<a.length;i++)
        maximum = max(a.A[i],maximum);
    return maximum;
}

int main(){
    Array a = {{3,5,2,0,6,4},10,6};

    cout<<Max(a);
    

    return 0;
}