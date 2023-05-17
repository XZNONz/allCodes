#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    string getName(){return name;}
    int getHealth(){return health;}
    int getXp(){return xp;}

    Player(string nameVal="NPC",int healthVal=10,int xpVal=5);
    //making a copy constructor
    Player(const Player &source);
    //making a destructor
    ~Player(){
        cout<<"destructor called"<<endl;
    };
};

Player::Player(string nameVal,int healthVal,int xpVal)
    :name{nameVal},health{healthVal},xp{xpVal}{
        cout<<"three args contructor called"<<endl;
    }

// Player::Player(const Player &source)
//     :name{source.name},health{source.health},xp{source.xp}{
//         cout<<"copy constructor called-- made copy of "<<name<<endl;
//     }

//////////////////////////////////////////////////////////////////////
//////////////////////////////////OR/////////////////////////////////
////////////////////////////////////////////////////////////////////

Player::Player(const Player &source)
    :Player{source.name,source.health,source.xp}{
        cout<<"copy constructor called -- made a copy of "<<name<<endl;
    }
void displayPlayer(Player p){
    cout<<"name: "<<p.getName()<<endl;
    cout<<"health: "<<p.getHealth()<<endl;
    cout<<"xp: "<<p.getXp()<<endl;
}
int main(){
    Player dodge;
    displayPlayer(dodge);
    Player Rande{"Randy"};
    displayPlayer(Rande);
    Player Mandy{"Mandy",100,600};
    displayPlayer(Mandy);
    Player empty{"XXXXX",100,500};
    Player doggy{empty};
    displayPlayer(doggy);
    return 0;
}