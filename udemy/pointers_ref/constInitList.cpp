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
    Player(string nameVal,int healthVal, int xpVal);

    void showAttr(){
        cout<<"Name: "<<name<<endl;
        cout<<"health: "<<health<<endl;
        cout<<"xp: "<<xp<<endl;
    }
};

Player::Player():
    name{"NPC"},health{10},xp{0}{
        showAttr();    
    }

Player::Player(string nameVal):
    name{nameVal},health{100},xp{50}{
        showAttr();
    }

Player::Player(string nameVal,int healthVal,int xpVal):
    name{nameVal},health{healthVal},xp{xpVal}{
        showAttr();
    }

int main(){
    Player larry;
    Player mandy{"Mandy"};
    Player terry{"terry"};
    Player lance{"Lance",100,50};

    Player *enemy=new Player("Armagedon",1000,9999);
    delete enemy;
    return 0;
}