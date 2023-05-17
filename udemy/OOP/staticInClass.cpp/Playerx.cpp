#include<iostream>
#include "Player.cpp"

using namespace std;
void displayActive(){
    cout<<"active players: "<<Player::getNumPlayers()<<endl;
}

int main(){
    displayActive();
    Player obj1{"tyler"};
    displayActive();
    Player obj2{"yler"};
    Player obj3{"tyer"};
    Player obj4{"tyl"};
    Player obj5{"tyr"};
    displayActive();
    {
        Player frank{"frank"};
        displayActive();
    }
    displayActive();

    Player *enemy=new Player("golaith",100,4322);
    displayActive();
    delete enemy;
    displayActive();
    return 0;
}