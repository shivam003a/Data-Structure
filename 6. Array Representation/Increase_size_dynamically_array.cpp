// Why we cant increase the size of the array
// because as the array memory are contigious, so further increasing the size of the 
// array does'nt gaurantee the contigious memory 


// this can be done only for the dynamically allocated arrays
#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p,*q;

    // Dynamically allocating the memory
    p = new int[5];
    p[0]=3,p[1]=4,p[2]=7,p[3]=9,p[4]=6;

    q = new int[10];

    // Coping the element of p in q
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }

    // deallocating the p
    delete []p;
    // pointing the p to the q
    p = q;
    // pointing the q to the NULL
    q = NULL;

    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }

    return 0;
}