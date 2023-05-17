#include<iostream>
#include<string>
using namespace std;

class Player{

    private:
    string name;
    int health;
    int xp;

    public:
    Player(string nameVal="NPC",int healthVal=10,int xpp=5);

    string getName(){
        return name;
    }

    int getHealth(){
        return health;
    }

    int getXp(){
        return xp;
    }

    void attr(){//damn imagine being so bored that you made 3 extra funcitons just to make a function to display those functions lmao lol bruh help me
        cout<<getName()<<endl;
        cout<<getHealth()<<endl;
        cout<<getXp()<<endl;
        cout<<endl;
    }
};

Player::Player(string nameVal,int healthVal,int xpp)
    :name{nameVal},health{healthVal},xp{xpp}{
        attr();
    }

int main(){
    Player mark;
    Player Shat{"rat",42};
    Player darth{"obi wan",54,100};
    Player enemy{"boss",100,500};

    Player *mainBoss= new Player{"darth maul",1000,9999};
    delete mainBoss;

    return 0;
}