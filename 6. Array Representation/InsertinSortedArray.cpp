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

// Insert a Element in sorted array
void InsertSort(Array *a,int value){
    int i = a->length-1;
    if(a->length==a->size){
        return;
    }
    while(i>=0 && a->A[i]>value){
        a->A[i+1] =  a->A[i];
        i--;
    }
    a->A[i+1] = value;
    a->length++;
}

int main(){
    Array a{{2,3,4,6,9},10,5};

    InsertSort(&a,20);
    display(a);
    

    return 0;
}