#include<iostream>
using namespace std;

class Move{
private:
    int some;
public:
    Move();
    Move(int d);
    Move(const Move &source);
    int getData()const{     //using const keyword in the function or the prototype so compiler knows it wont change the const object
        return some;
    }
    
};
void displayName(const Move &m){
        cout<<m.getData()<<endl;
    }
Move::Move(int d){
    some=d;
}
Move::Move(){
    some=0;
}
Move::Move(const Move &source)
    :Move{source.some}{
        cout<<"copy constructor called"<<endl;
    }

int main(){
    const Move obj1{534};
    displayName(obj1);
    return 0;
}


    

