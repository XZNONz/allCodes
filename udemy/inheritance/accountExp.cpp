#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Account{
    friend ostream &operator <<(ostream &os, const Account &account);
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
    static constexpr const char *defName="Unnamed Checking account";
    static constexpr double transFee=1.50;
    static constexpr double defBalance=0.0;
public:
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

ostream &operator <<(ostream &os, const CheckingAccount &account){
    os<<"[Checking Account: "<<account.name<<" : "<<account.balance<<"]";
    return os;
}

class TrustAccount : public Account{
    friend ostream &operator <<(ostream &os, const TrustAccount &account);
private:
    static constexpr const char *defName="Unnamed Checkin Account";
    static constexpr double defIntRate=50.0;
    static constexpr double defBalance=0.0;
    static constexpr int count=3;
    static constexpr double maxWithdrawPercent=0.2;
protected:
    int numCount;
public:
    TrustAccount(string name=defName, double balance=defBalance);
    bool deposit(double amount);
    bool cWithdrawl(double amount);
};

TrustAccount::TrustAccount(string name, double balance)
    :Account(name,balance),numCount{0}{

    }

bool TrustAccount::deposit(double amount){
    if(amount>=5000.0){
        amount+=defIntRate;
        return Account::deposit(amount);
    }
}

bool TrustAccount::cWithdrawl(double amount){
    if(numCount>=count || (amount>balance * maxWithdrawPercent)){
        cout<<"you've exhausted your maximum withdrawls."<<endl;
        return false;
    }
    else{
        ++numCount;
        return Account::withdraw(amount);
    }
}

ostream &operator <<(ostream &os, const TrustAccount &account){
    os<<"[Trust Account: "<<account.name<<" : "<<account.balance<<" account withdrawls:"<<account.numCount<<"]";
    return os;
}

void display(const vector<Account> &accounts);
void deposit(vector<Account> &accounts,double amount);
void withdraw(vector<Account> &accounts,double amount);

void display(const vector<SavingsAccount> &accounts);
void deposit(vector<SavingsAccount> &accounts,double amount);
void withdraw(vector<SavingsAccount> &accounts,double amount);

void display(const vector<Account> &accounts){
    cout<<"=======DISPLAYING ACCOUNTS======================================================"<<endl;
    for(const auto &acc:accounts)
        cout<<acc<<endl;
}

void deposit(vector<Account> &accounts,double amount){
    cout<<"========DEPOSITING TO ACCOUNTS====================================================="<<endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount))
            cout<<"deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"failed deposit of "<<amount<<" to "<<acc<<endl;
    }
}

void withdraw(vector<Account> &accounts, double amount){
    cout<<"======WITHDRAWING FROM ACCONTS====================================================="<<endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            cout<<"Withdrew "<<amount<<" from "<<acc<<endl;
        else    
            cout<<"failed to withdraw"<<endl;
    }
}

void display(const vector<SavingsAccount> &accounts){
    cout<<"=======DISPLAYING ACCOUNTS======================================================"<<endl;
    for(const auto &acc:accounts)
        cout<<acc<<endl;
}

void deposit(vector<SavingsAccount> &accounts,double amount){
    cout<<"========DEPOSITING TO ACCOUNTS====================================================="<<endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount))
            cout<<"deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"failed deposit of "<<amount<<" to "<<acc<<endl;
    }
}

void withdraw(vector<SavingsAccount> &accounts, double amount){
    cout<<"======WITHDRAWING FROM ACCOUNTS====================================================="<<endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            cout<<"Withdrew "<<amount<<" from "<<acc<<endl;
        else    
            cout<<"failed to withdraw"<<endl;
    }
}

int main(){
    cout.precision(2);
    cout<<boolalpha;
    cout<<fixed;

    vector<Account> accounts;

    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Tyler",2000});
    accounts.push_back(Account{"Roberto",12000});

    // display(accounts);
    // deposit(accounts,500);
    // withdraw(accounts,600);

    vector<SavingsAccount> savingAcconts;

    savingAcconts.push_back(SavingsAccount{});
    savingAcconts.push_back(SavingsAccount{"Bozo"});
    savingAcconts.push_back(SavingsAccount{"Rambo",32445});
    savingAcconts.push_back(SavingsAccount{"Draco",9323,5.9});

    // SavingsAccount prop{"Trippy",3000,3.5};
    // prop.deposit(1000);
    // cout<<prop.getBalance();

    // display(savingAcconts);
    // deposit(savingAcconts,500);
    // withdraw(savingAcconts,238);

    TrustAccount t1{"Mandy",3000.0};

    t1.cWithdrawl(323);
    t1.cWithdrawl(323);
    t1.cWithdrawl(323);
    t1.cWithdrawl(323);
    t1.cWithdrawl(323);
    cout<<t1.getBalance()<<endl;
    cout<<t1;

    return 0;
}