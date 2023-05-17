//implemention the member function outside the class
#include<iostream>
#include<string>
using namespace std;

class Account{
    private:

    string name;
    double balance;

    public:
    //declared inline
    void setBal(double bal){balance=bal;}
    double getBal(){return balance;}

    //providing the function prototype in the class declaration
    void setName(string n);
    string getName();

    bool deposit(double amount);
    bool withdrawl(double amount);

};
//using scope resolution(::) to implement the functions for the class

void Account::setName(string n){
    name=n;
}

string Account::getName(){
    return name;
}

bool Account::deposit(double amount){
    balance+=amount;
    return true;
}

bool Account::withdrawl(double amount){
    if(balance-amount>=0){
    balance-=amount;
    return true;
    }else{
        return false;
    }
}

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