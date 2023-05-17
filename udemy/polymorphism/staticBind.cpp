#include<iostream>
using namespace std;

class Base{
public:
    void sayShit() const{
        cout<<"base class shit"<<endl;
    }
};

class Derived: public Base{
public:
    void sayShit(){
        cout<<"derived class shit"<<endl;
    }
};

void greetings(const Base &obj){
    cout<<"greetings"<<endl;
    obj.sayShit();
}

int main(){

    Base b;
    b.sayShit();

    Derived d;
    d.sayShit();

    greetings(b);
    greetings(d);

    Base *ptr = new Derived;    
    ptr->sayShit();         //ptr points to base class hence base sayShit will be invoked not Derived classes 
    return 0;               //as static binding is used we can change this behavious using virtural functions   
}