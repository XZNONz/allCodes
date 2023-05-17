#include<iostream>
using namespace std;

int C(int n,int r){
    if(r==0||n==r)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);
}

int main(){
    cout<<C(5,5)<<endl;
    cout<<C(10,6)<<endl;
    return 0;
}
