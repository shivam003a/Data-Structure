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

// Function forn getting the union of two Array
Array* Union(Array a,Array b){
    int i,j,k;
    i=j=k=0;
    Array *c = new Array;
    while(i<a.length && j<b.length){
        if(a.A[i]>b.A[j]){
            c->A[k++] = b.A[j++];
        }
        else if(a.A[i]<b.A[j]){
            c->A[k++] = a.A[i++];
        }
        else{
            c->A[k++] = a.A[i];
            i++;
            j++;
        }
    }
    for(;i<a.length;i++){
            c->A[k++] = a.A[i];
    }
    for(;j<b.length;j++){
            c->A[k++] = b.A[j];
    }
    c->length = b.length + a.length;
    c->size = 10;

    return c;

}

// Function forn getting the intersection of two Array
Array * intersection(Array a,Array b){
    int i,j,k;
    i=j=k=0;
    Array *c = new Array;
    while(i<a.length && j<b.length){
        if(a.A[i]>b.A[j]){
            j++;
        }
        else if(a.A[i]<b.A[j]){
            i++;
        }
        else{
            c->A[k++] = a.A[i++];
            j++;
        }
    }
    c->length = k;
    c->size = 10;
    return c;
}

// Function forn getting the A-B of two Array
Array * subtract(Array a,Array b){
    int i,j,k;
    i=j=k=0;
    Array *c = new Array;
    while(i<a.length && j<b.length){
        if(a.A[i]>b.A[j]){
            j++;
        }
        else if(a.A[i]<b.A[j]){
            c->A[k++] = a.A[i++];
        }
        else{
            i++;
            j++;
        }
    }
    c->length = k;
    c->size=10;
    return c;
}

int main(){
    Array a = {{2,6,7,8,9},10,5};
    Array b = {{1,4,6,8,9},10,5};

    Array *c = subtract(a,b);
    for(int i=0;i<c->length;i++){
        cout<<c->A[i]<<" ";
    }
    

    return 0;
}