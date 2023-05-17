#include<iostream>
using namespace std;
int main(){
    int num{122};
    int num1{342};
    cout<<num<<endl;
    {
        cout<<num1<<endl;
        int num{234};
        cout<<num<<endl;
    }
    cout<<num<<endl;
    return 0;
}