#include<iostream>
#include<vector>
#include<string>
using namespace std;

int addNum(int,int);
double addNum(double, double);


int main(){
    cout<<addNum(34,53)<<endl;
    cout<<addNum(33.65,23.6)<<endl;
    cout<<addNum(45,43)<<endl;
    return 0;
}
int addNum(int x,int y){
    return x+y;
}
double addNum(double x,double y){
    return x+y;
}