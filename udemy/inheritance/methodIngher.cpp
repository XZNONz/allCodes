#include<iostream>
using namespace std;

class Account{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double balance;
public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};

Account::Account()
    :Account(0.0){}

Account::Account(double balance)
    :balance(balance){}

void Account::deposit(double amount){
    balance=+amount;
}

void Account::withdraw(double amount){
    if(balance-amount>=0)
        balance-=amount;
    else 
        cout<<"insufficient funds"<<endl;
}

ostream &operator <<(ostream &os, const Account &account){
    os<<"account balance:"<<account.balance;
    return os;
}

class SavingsAccount: public Account{
    friend ostream &operator <<(ostream &os, const SavingsAccount &account);
protected:
    double intRate;
public:
    SavingsAccount();
    SavingsAccount(double balance,double intRate);
    void deposit(double amount);
    //withdraw is inherited
};

SavingsAccount::SavingsAccount(double balance, double intRate)
    :Account(balance),intRate{intRate}{

    }

SavingsAccount::SavingsAccount()
    :SavingsAccount(0.0,0.0){

    }

void SavingsAccount::deposit(double amount){
    amount=amount+(amount*intRate/100);
    Account::deposit(amount);
}

ostream &operator<<(ostream &os,const SavingsAccount &account){
    os<<"savings account balance:"<<account.balance<<" interest rate:"<<account.intRate;
    return os;
} 

int main(){

    SavingsAccount s1{1000.0,5.0};
    cout<<s1<<endl;
    
    s1.deposit(500.0);
    cout<<s1<<endl;

    s1.withdraw(90);
    cout<<s1<<endl;

    return 0;
}