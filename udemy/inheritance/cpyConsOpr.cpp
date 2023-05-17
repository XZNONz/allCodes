#include<iostream>
using namespace std;

class Base{
private:
    int value;
public:
    Base()
        :value{0}{
            cout<<"Base no args constructor"<<endl;
        }
    Base(int x)
        :value{x}{
            cout<<"Base overloaded constructor"<<endl;
        }
    Base(const Base &other)
        :value{other.value}{
            cout<<"base copy constructor"<<endl;
        }
    Base &operator =(const Base &other){
        cout<<"base operator="<<endl;
        if(this==&other)
            return *this;
        value=other.value;
        return *this;
    }
    ~Base(){cout<<"base desturctor"<<endl;}
};

class Derived: public Base{
private:
    int doubleVal;
public:
    Derived()
        :Base{},doubleVal{0}{
            cout<<"derived no args constructor"<<endl;
        }
    Derived(int x)
        :Base{x},doubleVal{x*2}{
            cout<<"derived overloaded constructor"<<endl;
        }
    Derived(const Derived &other)
        :Base(other),doubleVal{other.doubleVal}{
            cout<<"derived copy constructor"<<endl;
        }

    Derived &operator =(const Derived &other){
        cout<<"derived operator="<<endl;
        if(this==&other)
            return *this;
        Base::operator=(other);
        doubleVal=other.doubleVal;
        return *this;
    }
    ~Derived(){cout<<"derived destructor"<<endl;}
};

int main(){
    // Base b{};
    // Base t{343};
    // Base b1{t};
    // t=b1;

    Derived d{342};
    Derived d1{d};
    d=d1;
    
    return 0;
}