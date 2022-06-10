#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // First ways of declaring an 2D array
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    // Second ways of declaring 2d array using pointer

    // Declaring an pointer Array
    int *p[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>p[i][j];
        }
    }

    cout<<"Showing First Array\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<" ";
        }
    }

    cout<<endl;
    cout<<"Showing First Array\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<p[i][j]<<"    ";
        }
    }

    return 0;
}