#include "Player.h"

int Player::count{0};
Player::Player(std::string nameVal,int healthVal,int xpVal)
    :name{nameVal},health{healthVal},xp{xpVal}{
        ++count;
    }

Player::Player(const Player &soruce)
    :Player(soruce.name,soruce.health,soruce.xp){

    }

Player::~Player(){
    --count;
}
int Player::getNumPlayers(){
    return count;
}