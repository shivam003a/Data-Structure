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

int LinearSearchT(Array *a,int key){
    for(int i=0;i<a->length;i++){
        if(key==a->A[i]){
            swap(a->A[i],a->A[i-1]);
            return i-1;
        }
    }
    return -1;
}


int main(){
    Array a{{2,4,3,5,6},10,5};

    cout<<LinearSearchT(&a,3)<<endl;
    display(a);


    

    return 0;
}