#include<iostream>
using namespace std;

// int fun(int n){
//     if(n>100)
//         return n-10;
//     else    
//         return fun(fun(n+11));
// }

// int main(){
//     int g;
//     g=fun(195);
//     cout<<g;
// }

////////////////////////program to find the power using recursion////////////////////////////

int pow(int m,int n){           //faster method
    if(n==0)
        return 1;
    
    if(n%2==0)
        return pow(m*m,n/2);
    else        
        return pow(m*m,(n-1)/2)*m;
}

int pow1(int m,int n){
    if(n==0)
        return 1;
    else    
        return pow1(m,n-1)*m;
}

int main(){
    int g;
    int p;
    g=pow(4,7);
    p=pow1(4,7);
    cout<<g<<" "<<p<<endl;
}