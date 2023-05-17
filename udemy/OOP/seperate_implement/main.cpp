#include<iostream>
#include "account.cpp"
using namespace std;

int main(){
    Account shivalikAcc;
    shivalikAcc.setName("Shivalik");
    shivalikAcc.setBal(10000.00);
    if(shivalikAcc.deposit(244.0))
        cout<<"deposit done"<<endl;
    else 
        cout<<"deposid not allowed"<<endl;
    
    if(shivalikAcc.withdrawl(534.0))
        cout<<"withdrawl done"<<endl;
    else 
        cout<<"not sufficient funds"<<endl;

    if(shivalikAcc.withdrawl(50000.0))
        cout<<"withdrawl done"<<endl;
    else 
        cout<<"not sufficient funds"<<endl;
    
    return 0;
}