#include<iostream>
using namespace std;

class Account{
public:
    virtual void withdraw(double amount){
        cout<<"in account:withdraw"<<endl;
    }

    virtual ~Account(){
        cout<<"account:destructor"<<endl;
    }
};

class Checking:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"in checking:withdraw"<<endl;
        }
    virtual ~Checking(){
        cout<<"checking:destructor"<<endl;
    }
};

class Savings:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"in savings:withdraw"<<endl;
        }
    virtual ~Savings(){
        cout<<"savings:destructor"<<endl;
    }
};

class Trust:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"in trust:withdraw"<<endl;
        }
        virtual ~Trust(){
            cout<<"trust:destructor"<<endl;
        }
};

void doWithdraw(Account &obj,double amount){
    obj.withdraw(amount);
}

int main(){
    Account a;
    Account &ref=a;
    ref.withdraw(1000);

    Trust t;
    Account &ref1=t;
    ref1.withdraw(3454);

    Account a1;
    Savings s1;
    Checking c1;
    Trust t1;

    doWithdraw(a1,3353);
    doWithdraw(s1,3353);
    doWithdraw(c1,3353);
    doWithdraw(t1,3353);
    return 0;
}