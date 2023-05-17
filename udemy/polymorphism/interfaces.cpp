#include<iostream>
using namespace std;

class i_printable{
    friend ostream &operator <<(ostream &os,const i_printable &obj);
public:
    virtual void print(ostream &os) const =0;
};

ostream &operator <<(ostream &os,const i_printable &obj){
    obj.print(os);
    return os;
}

class onePrint : public i_printable{
public:
    virtual void print(ostream &os) const override{
        os<<"onePrint display";
    }
};

class Dog:public i_printable{
public:
    virtual void print(ostream &os) const override{
        os<<"dog shit woof woof";
    }
};

void print(i_printable &obj){
        cout<<obj<<endl;
    }

int main(){
    onePrint one;
    Dog *dog= new Dog();
    i_printable *two= new Dog();
    
    print(*two);
    print(*dog);
    print(one);
    return 0;
}