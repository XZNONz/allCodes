#include<iostream>
using namespace std;

int F[10];

//using iteration
int fib(int n){
    int t0=0,t1=1,s;

    if(n<=0) return n;

    for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

//using recursion
int fibR(int n){
    if(n<=1)
        return n;
    else{
        return fibR(n-2)+fibR(n-1);
    }
}

//using memoization
int fibM(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2]=fibM(n-2);
        if(F[n-1]==-1)
            F[n-1]=fibM(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}
int main(){
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    cout<<fib(9)<<endl;
    cout<<fibR(9)<<endl;
    cout<<fibM(9)<<endl;
    return 0;
}