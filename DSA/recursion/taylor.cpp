#include<iostream>
using namespace std;

double e(int x,int n){
    static double p=1,f=1;
    double r;

    if(n==0)
        return(1);
    else{
        r=e(x,n-1);
        f=f*n;

        return r+p/f;
    }
}
//using homers rule [recursive]
double e1(int x,int n){

    static double s=1;
    if(n==0)
        return s;
    else{
        s=1+x*s/n;
    }
    return e1(x,n-1);
}
//using homers rule [iterative]
double e2(int x,int n){
    double s=1;
    int i;
    double num=1;
    double den=1;

    for(i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main(){
    cout<<e(1,10)<<endl;
    cout<<e1(1,10)<<endl;
    cout<<e2(1,10)<<endl;
    return 0;
}
///////////////////////////////////////////USING HOMERS RULE////////////////////////////////////////////////////
