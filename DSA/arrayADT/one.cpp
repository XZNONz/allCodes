#include<iostream>
using namespace std;

/*
//code to increase the size of an array 

int main(){
    int *p,*q;
    p=new int [5];
    q=new int [10];

    for(int i=0;i<5;i++)
        p[i]=i*2;

    for(int i=0;i<5;i++)
        q[i]=p[i];

    delete []p;
    p=q;
    q=NULL;

    p[6]=69;
    for(int i=0;i<5;i++){
        cout<<p[i];
    }
    cout<<endl;
    cout<<p[6];
    return 0;
}
*/

//2D matrix

int main(){
    //method 1
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,0,8,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j];
            cout<<endl;
        }
    }

    cout<<endl;
    cout<<endl;

    //method 2
    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            B[i][j]=j*2;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<B[i][j];
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<endl;

    //method 3
    int **C;
    C=new int *[3];
    C[0]=new int [4];
    C[1]=new int [4];
    C[2]=new int [4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            C[i][j]=j*2;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j];
            cout<<endl;
        }
    }
    return 0;
}