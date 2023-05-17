#include<iostream>
#include<string>
using namespace std;

class Shallow{
    private:
    int *data;
    public:
    void setData(int d){
        *data=d;
    }
    int getData(){
        return *data;
    }

    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d){
    data=new int;
    *data=d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){
        cout<<"copy constructor -shallow copy"<<endl;
    }

Shallow::~Shallow(){
    delete data;
    cout<<"destructor freeing data"<<endl;
}

void displayShallow(Shallow s){
    cout<<s.getData()<<endl;
}

int main(){
    Shallow obj1{432};
    displayShallow(obj1);
    //the value is not copied but the pointer address is copied hence same address is taken by using shallow cooy 
    Shallow obj2{obj1};
    obj2.setData(543); //this will change the value of both obj1 and obj2 as they are pointing to the same address
    displayShallow(obj2);
    displayShallow(obj1);
    return 0;
}