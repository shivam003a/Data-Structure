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

// Binary Search Using recursive Method
int BinarySearch(Array a,int l,int h,int key){
    int mid = (l+h)/2;
    if(l<=h){
        if(key==a.A[mid]) return mid;
        else if(key<a.A[mid]) return BinarySearch(a,l,mid-1,key);
        else return BinarySearch(a,mid+1,h,key);
    }
    return -1;
}

int main(){
     Array a{{2,3,4,5,6},10,5};

    cout<<BinarySearch(a,0,a.length,65);
    

    return 0;
}