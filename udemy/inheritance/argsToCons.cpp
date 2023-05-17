#include<iostream>
using namespace std;

class Base{
private:
    int value;
public:
    Base();
    Base(int x);
    ~Base();

    void getVal(){
        cout<<value<<endl;
    }
};

Base::Base()
    :value{0}{
        cout<<"base no args constructor called"<<endl;
    }

Base::Base(int x)
    :value{x}{
        cout<<"base overloaded constructor called"<<endl;
    }

Base::~Base(){
    cout<<"base destructor called"<<endl;
}

class Derived: public Base{
private:
    int doubleVal;
public:
    Derived();
    Derived(int x);
    ~Derived();
    int getDoubleVal(){
        Base::getVal();
        cout<<doubleVal<<endl;
    }
};

Derived::Derived()
    :Base(),doubleVal{0}{
        cout<<"derived no args constructor called"<<endl;
    }

Derived::Derived(int x)
    :Base(x),doubleVal{x*2}{
        cout<<"derived overloaded constructor called"<<endl;
    }

Derived::~Derived(){
    cout<<"derived destructor called"<<endl;
}

int main(){
    // Derived t;

    Derived d{100};
    d.getDoubleVal();
    return 0;
}