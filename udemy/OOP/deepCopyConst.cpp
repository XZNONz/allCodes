#include<iostream>
#include<string>
using namespace std;

class Deep{
private:
    int *data;
public:
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
    void setData(int d){
        *data=d;
    }
    int getData(){return *data;}
};

Deep::Deep(int d){
    data = new int;
    *data=d;
}

Deep::Deep(const Deep &source){
    data=new int;
    *data=*source.data;
    cout<<"copy constructor -deep"<<endl;
}

///////////////////////////////////////////////
//////////////////OR//////////////////////////
/////////////////////////////////////////////

// Deep::Deep(const Deep &source)//can also be done by delegating 
//     :Deep{*source.data}{

//     }

void displayData(Deep s){
    cout<<s.getData()<<endl;
}

Deep::~Deep(){
    delete data;
    cout<<"destructor called"<<endl;
}

int main(){
    Deep obj1{100};
    displayData(obj1);

    Deep obj2{obj1};
    obj2.setData(4232); 
    displayData(obj1);
    displayData(obj2);
    return 0;
}