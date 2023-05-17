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

int main(){
    cout<<"\n==========pointers==========="<<endl;
    Account *p1=new Account();
    Account *p2=new Savings();
    Account *p3=new Checking();
    Account *p4=new Trust();

    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(100);
    p4->withdraw(100);


    cout<<"\n============dump=============="<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}
