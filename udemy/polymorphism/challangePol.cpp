#include<iostream>
#include<vector>
#include<string>
using namespace std;

class i_printable{
    friend ostream &operator <<(ostream &os,const i_printable &obj);
public:
    virtual void print(ostream &os) const =0;
    virtual ~i_printable()=default;
};
ostream &operator <<(ostream &os,const i_printable &obj){
    obj.print(os);
    return os;
}
class Account:public i_printable{
    friend ostream &operator <<(ostream &os,const Account &account);
private:
    static constexpr const char *defName="Unnamed Account";
    static constexpr const char defBalance=0.0;
protected:
    string name;
    double balance;
public:
    Account(string name=defName,double balance=defBalance);
    virtual bool deposit(double amount)=0;
    virtual bool withdraw(double amount)=0;
    virtual void print(ostream &os) const override;
    virtual ~Account()=default;
};

Account::Account(string name,double balance)
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
    }else   
        return false;
}

void Account::print(ostream &os) const{
    os.precision(2);
    os.fixed;
    os<<"[Account "<<name<<":"<<balance<<"]";
}

class SavingsAccount : public Account{
private:
    static constexpr const char *defName="Unnamed Savings Account";
    static constexpr double defBalance=0.0;
    static constexpr double defIntRate=0.0;
protected:
    double intRate;
public:
    SavingsAccount(string name=defName,double balance=defBalance, double intRate=defIntRate);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void print(ostream &os) const override;
    virtual ~SavingsAccount()=default;
};

SavingsAccount::SavingsAccount(string name,double balance, double intRate)
    :Account(name,balance), intRate{intRate}{

    }

bool SavingsAccount::deposit(double amount){
    amount+=amount * (intRate/100);
    return Account::deposit(amount);
}

bool SavingsAccount::withdraw(double amount){
    return Account::withdraw(amount);
}

void SavingsAccount::print(ostream &os) const{
    os.precision(2);
    os<<fixed;
    os<<"[Savings Account:"<<name<<":"<<balance<<","<<intRate<<"%]";
}

class CheckingAccount : public Account{
private:
    static constexpr const char *defName="Unnamed Checking account";
    static constexpr double transFee=1.50;
    static constexpr double defBalance=0.0;
public:
    CheckingAccount(string name=defName, double balance=defBalance);
    virtual bool withdraw(double amount);
    virtual bool deposit(double amount);
    virtual void print(ostream &os) const override;
    virtual ~CheckingAccount()=default;
};

CheckingAccount::CheckingAccount(string name,double balance)
    :Account(name,balance){

    }

bool CheckingAccount::withdraw(double amount){
    if((balance-(amount+1.50))!=0){
        double fee=amount+transFee;
        balance-=fee;
        return true;
    }else{
        cout<<"withdraw failed"<<endl;
        return false;
    }   
}
bool CheckingAccount::deposit(double amount){
    return Account::deposit(amount);
}

void CheckingAccount::print(ostream &os) const {
    os.precision(2);
    os<<fixed;
    os<<"[Checking Account: "<<name<<" : "<<balance<<"]";
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
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void print(ostream &os) const override;
    virtual ~TrustAccount()=default;
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

bool TrustAccount::withdraw(double amount){
    if(numCount>=count || (amount>balance * maxWithdrawPercent)){
        cout<<"you've exhausted your maximum withdraws."<<endl;
        return false;
    }
    else{
        ++numCount;
        return Account::withdraw(amount);
    }
}

void TrustAccount::print(ostream &os) const{
    os.precision(2);
    os<<fixed;
    os<<"[Trust Account: "<<name<<" : "<<balance<<" account withdraws:"<<numCount<<"]";
}

void display(const vector<Account *> &accounts);
void deposit(const vector<Account*> &accounts, double amount);
void withdraw(const vector<Account*> &accounts,double amount);


void display(const vector<Account *> &accounts){
    cout<<"\n=====================Accounts==========================="<<endl;
    for(const auto acc:accounts)
        cout<<*acc<<endl;
}

void deposit(const vector<Account*> &accounts, double amount){
    cout<<"\n==========================Depositing to Accounts================"<<endl;
    for(auto acc:accounts){
        if(acc->deposit(amount))
            cout<<"Deposited"<<amount<<"to"<<*acc<<endl;
        else 
            cout<<"Failed Deposit of"<<amount<<"to"<<*acc<<endl;
    }
}

void withdraw(const vector<Account*> &accounts,double amount){
    cout<<"\n============Withdrawing form Accounts============================="<<endl;
    for(auto acc:accounts){
        if(acc->withdraw(amount))
            cout<<"Withdrew"<<amount<<"from"<<*acc<<endl;
        else   
            cout<<"Failed Withdrawl of"<<amount<<"from"<<*acc<<endl;
    }
}

int main(){
    CheckingAccount frank{"Frank",500};
    cout<<frank<<endl;

    Account *trust =new TrustAccount("sdjkf");
    cout<<trust<<endl;

    Account *p1=new CheckingAccount("Larry",100000);
    Account *p2=new SavingsAccount("Moe",1000);
    Account *p3=new TrustAccount("Curly");

    vector<Account *>accounts{p1,p2,p3};

    display(accounts);
    deposit(accounts,1394);
    withdraw(accounts,242);

    display(accounts);
    return 0;
}