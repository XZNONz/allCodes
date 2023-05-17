#include<iostream>
using namespace std;
inline int addNumbers(int a,int b){
    return a+b;
}
int main(){
    int result{0};
    cout<<addNumbers(234,533);
    return 0;
}