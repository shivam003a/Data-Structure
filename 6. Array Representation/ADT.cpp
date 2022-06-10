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

// User defined function for the Swapping of the two values
void Swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Function for appending the value to the end of the array
void append(Array *a,int x){
    if(a->length<a->size){
        a->A[a->length++] = x;
    }
}

// Function for inserting the value to the particular index of the array
void insert(Array *a,int index, int x){
    if(0 <= index <= a->length){
        for(int i=a->length;i>index;i--){
            a->A[i] = a->A[i-1];
        }
        a->A[index] = x;
        a->length++;
    }
}


// Function to delete the element from a an index
int remove(Array *a,int index){
    int x = a->A[index];
    if(0<= index < a->length){
        for(int i=index;i<a->length-1;i++){
            a->A[i] = a->A[i+1];
        }
        a->length--;
        return x;
    }
    return 0;
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

// Binary Search Algorithm
int BinarySearch(Array a,int key){
    int l=0,h = a.length-1;

    // Array must be sorted for applying BinarySearch

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

// Reverse the Array using auxiallary array
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

// Reverse of the array 
void ReverseA(Array *a){
    for(int i=0,j=a->length-1;i<=j;i++,j--){
        int temp = a->A[i];
        a->A[i] = a->A[j];
        a->A[j] = temp;

    }
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

// To check whether the the given array is sorted or not
int isSorted(Array a){
    for(int i=0;i<a.length-1;i++){
        if(a.A[i]>a.A[i+1]){
            return 0;
        }
    }
    return 1;
}

// Function two merge two sorted array
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


// Driver code
int main(){
    Array a{{2,3,4,6,11,9},10,6};

    cout<<isSorted(a);
    // display(a);
    

    return 0;
}