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

// Reverse the Array
void Reverse(Array *a){
    int *p;
    p = new int[a->length];

    for(int i=a->length-1,j=0;i>=0;i--,j++){
        p[j] = a->A[i];
    }
    for(int i=0;i<a->length;i++){
        a->A[i] = p[i];
    }
}

void ReverseA(Array *a){
    for(int i=0,j=a->length-1;i<=j;i++,j--){
        int temp = a->A[i];
        a->A[i] = a->A[j];
        a->A[j] = temp;

    }
}

int main(){
    Array a = {{2,5,4,6,6},10,5};
    display(a);
    ReverseA(&a);
    cout<<endl;
    display(a);
    

    return 0;
}