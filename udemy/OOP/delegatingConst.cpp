#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;
    public:
    Player();
    Player(string nameVal);
    Player(string nameVal,int healthVal, int xpp);

    void attr(){
        cout<<name<<endl;
        cout<<health<<endl;
        cout<<xp<<endl;
        cout<<endl;
    }
};
//delegating constructors
//the third constructor will be used to initialize everything for the other constructors 
Player::Player()
    : Player{"NPC",10,5}{
        cout<<"one arg constructor"<<endl;
    }

Player::Player(string nameVal)
    : Player{nameVal,99,90}{
        cout<<"two arg constructor"<<endl;
    }

Player::Player(string nameVal, int healthVal,int xpp)
    : name{nameVal},health{healthVal},xp{xpp}{
        cout<<"three arg constructor"<<endl; 
        attr();
    }

int main(){
    Player mark;
    Player dark{"little red riding hood"};
    Player steve{"steve",100,100};
    Player balls{"balls",1010,69};

    return 0;
}