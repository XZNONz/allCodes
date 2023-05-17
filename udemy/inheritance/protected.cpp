#include<iostream>
#include<string>
using namespace std;

class Base{
public:
    int a{0};
    void display(){cout<<a<<","<<","<<c<<endl;}
protected:
    int b{0};
private:
    int c{0};
};

class Derived: public Base{
//a will be public
//b will be protected
 //c will be private
public:
    void accessBaseMembers(){
        a=100;//OK
        b=300;//OK
        // c=1000; //not accessible
    }
};

int main(){
    Base base;
    // base.a=100; //OK 
    // base.b=200; //compiler error
    // base.c=300; //compiler error
    Derived d;
    d.a=900;//OK
    // d.b=434;//error
    // d.c=3232;//error
    return 0;
}