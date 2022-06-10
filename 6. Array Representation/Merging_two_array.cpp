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

Array* mergeArray(Array *a,Array *b){
    int i=0,j=0,k=0;

    Array *c = new Array;

    while(i<a->length && j<b->length){
        if(a->A[i]>b->A[j]){
            c->A[k++] = b->A[j++];
        }
        else{
           c->A[k++] = a->A[i++]; 
        }
    }
    for(;i<a->length;i++){
            c->A[k++] = a->A[i];
    }
    for(;j<b->length;j++){
            c->A[k++] = b->A[j];
    }
    c->length = b->length + a->length;
    return c;
}

int main(){
    Array a = {{2,2,4,8,11},10,5};
    Array b = {{7,8,10,11},10,4};

    Array *c = mergeArray(&a,&b);
    for(int i=0;i<c->length;i++){
        cout<<c->A[i]<<" ";
    }

    

    return 0;
}