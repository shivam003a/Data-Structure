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

// Binary Search Algorithm
int BinarySearch(Array a,int key){
    int l=0,h = a.length-1;

    // Array Provide must be Sorted

    while(l<=h){
        int mid = (l+h)/2;
        if(key==a.A[mid]){
            return mid;
        }
        else if(key<a.A[mid]){
            h = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    Array a{{2,3,4,5,6},10,5};

    cout<<BinarySearch(a,6);
    
    return 0;
}