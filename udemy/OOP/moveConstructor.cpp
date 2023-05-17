#include<iostream>
#include<vector>
using namespace std;

class Move{
private:
    int *data;
public:
    Move(int d);
    Move(const Move &source);
    Move(Move &&source)noexcept;
    ~Move();
    void setData(int d){
        *data=d;
    }
    int getData(){return *data;}
};
//constructor
Move::Move(int d){
    data= new int;
    *data=d;
    cout<<"consturctor for "<<d<<endl;
}

//move constructor
//deep constructor is not called while using move constructor
Move::Move(Move &&source) noexcept
    :data{source.data}{
        source.data=nullptr;
        cout<<"move constructor --moving resource:"<<*data<<endl;
    }

//copy constructor
Move::Move(const Move &source)
    :Move{*source.data}{
        cout<<"copy constructor constructor for:--deep "<<*data<<endl;
    }

//destructor
Move::~Move(){
    if(data!=nullptr){
        cout<<"destructor for "<<*data<<endl;
    }
    else{
        cout<<"destructor for nullptr"<<endl;
    }
    delete data;
}

int main(){
    vector<Move>vec;

    vec.push_back(Move{43});
    vec.push_back(Move{32});
    vec.push_back(Move{92});
    vec.push_back(Move{82});
    vec.push_back(Move{62});
    return 0;
}