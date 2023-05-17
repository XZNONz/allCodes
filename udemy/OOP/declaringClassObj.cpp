#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Player{
    //attributes
    string name{"player"};
    int health{100};
    int xp{500};

    //methods
    void talk(string);
    bool isDead();
};

class Account{
    //attributes
    string name{"account holder"};
    double balance{400};

    //methods
    bool deposit(double);
    bool withdrawl(double);
};

int main(){
    Account shivalikAccount;
    Account jimsAccount;

    Player shivalik;
    Player Hero;

    // vector<Player> playerVec{frank};
    
    Player *enemy{nullptr};
    enemy=new Player;
    delete enemy;
    return 0;
}
