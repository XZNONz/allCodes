#include<iostream>
using namespace std;

void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b);
        cout<<"from "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}

int main(){
    
    toh(3,1,2,3);
    int A[]={34,23,12,45,65,32};
    cout<<2[A]<<endl;
    cout<<*(A+2)<<endl;
    for(int i=0;i<sizeof(A)/sizeof(int);i++){
        cout<<&A[i]<<endl;
    }
    return 0;
}