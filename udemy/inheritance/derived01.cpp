#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Account{
public:
    string name;
    double balance;
    void deposit(double amount);
    void withdrawl(double amount);
    Account();
    ~Account();
};

Account::Account(){
    name="an account";
    balance=10000;
};
Account::~Account(){};

void Account::deposit(double amount){
    cout<<"account deposit called with "<<amount<<endl;
}

void Account::withdrawl(double amount){
    cout<<"account withdrawl called with "<<amount<<endl;
}

class SavingAccount{
public:
    double interestRate;
    SavingAccount();
    ~SavingAccount();

    void deposit(double amount);
    void withdrawl(double amount);
};

SavingAccount::SavingAccount(){
    interestRate=3.0;
}
SavingAccount::~SavingAccount(){}

void SavingAccount::deposit(double amount){
    cout<<"Saving account deposit called with "<<amount<<endl;
}
void SavingAccount::withdrawl(double amount){
    cout<<"Saving account withdrawl called with "<<amount<<endl;
}

int main(){
    cout<<"====================================back account================================"<<endl;
    Account acc{};
    acc.deposit(1000.0);
    acc.withdrawl(300.0);
    cout<<endl;

    Account *p_acc{nullptr};
    p_acc=new Account();
    p_acc->deposit(1000.0);
    p_acc->withdrawl(400.0);
    delete p_acc;

    //using saving account class
    cout<<"=======================================saving account============================"<<endl;
    SavingAccount savAcc{};
    savAcc.deposit(5000.0);
    savAcc.withdrawl(2000.0);
    cout<<endl;

    Account *s_acc{nullptr};
    s_acc=new Account();
    s_acc->deposit(3000.0);
    s_acc->withdrawl(1500.0);
    delete s_acc;
    return 0;
}