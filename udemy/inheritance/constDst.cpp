#include<iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base():
        value{0}{
            cout<<"base no args constructor called"<<endl;
        }
    Base(int x):
        value{x}{
            cout<<"base overloaded constructor called"<<endl;
        }
    ~Base(){cout<<"base destructor called"<<endl;}
};

class Derived: public Base{
private:
    int doubleVal;
public:
    Derived():
        doubleVal{0}{
            cout<<"derived no args constructor called"<<endl;
        }
    Derived(int x):
        doubleVal(x*2){
            cout<<"derived overloaded constructor called"<<endl;
        }
    ~Derived(){cout<<"derived destructor called"<<endl;}
};

int main(){

    // Base baseObj;
    // Base baseObj2{344};
    Derived d{432};

    return 0;
}