#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Account{
    // friend ostream &operator <<(ostream &os, const Account &account);
private:    
    static constexpr const char *defName="Unnamed Account";
    static constexpr double defBalance=0.0;
protected:
    string name;
    double balance;
public: 
    Account(string name=defName,double balance=defBalance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
};

Account::Account(string name, double balance)
    :name{name},balance{balance}{

    }

bool Account::deposit(double amount){
    if(amount<0)
        return false;
    else{
        balance+=amount;
        return true;
    }
}

bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance-=amount;
        return true;
    }else{
        return false;
    }
}

double Account::getBalance() const{
    return balance;
}

ostream &operator <<(ostream &os, const Account &account){
    os<<"[Account:"<<account.name<<":"<<account.balance<<"]";
    return os;
}

class SavingsAccount : public Account{
    friend ostream &operator <<(ostream &os, const SavingsAccount &account);
private:
    static constexpr const char *defName="Unnamed Savings Account";
    static constexpr double defBalance=0.0;
    static constexpr double defIntRate=0.0;
protected:
    double intRate;
public:
    SavingsAccount(string name=defName,double balance=defBalance, double intRate=defIntRate);
    bool deposit(double amount);
};

SavingsAccount::SavingsAccount(string name,double balance, double intRate)
    :Account(name,balance), intRate{intRate}{

    }

bool SavingsAccount::deposit(double amount){
    amount+=amount * (intRate/100);
    return Account::deposit(amount);
}

ostream &operator <<(ostream &os, const SavingsAccount &account){
    os<<"[Savings Account:"<<account.name<<":"<<account.balance<<","<<account.intRate<<"%]";
    return os;
}

class CheckingAccount : public Account{
    friend ostream &operator <<(ostream &os, const CheckingAccount &account);
private:
    static constexpr char *defName="Unnamed Checking account";
    static constexpr double transFee=1.50;
    static constexpr double defBalance=0.0;
protected:
    CheckingAccount(string name=defName, double balance=defBalance);
    bool withdrawl(double amount);
};

CheckingAccount::CheckingAccount(string name,double balance)
    :Account(name,balance){

    }

bool CheckingAccount::withdrawl(double amount){
    if((balance-(amount+1.50))!=0){
        double fee=amount+transFee;
        balance-=fee;
        return true;
    }else{
        cout<<"withdrawl failed"<<endl;
        return false;
    }   
}

ostream &ostream <<(ostream &os,const Checking)

class TrustAccount : public Account{

};