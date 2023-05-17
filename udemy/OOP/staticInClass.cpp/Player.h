#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include<string>
class Player
{
private:
    static int count;
    std::string name;
    int health;
    int xp;
public:
    std::string getName(){return name;}
    int getHealth(){return health;}
    int getXp(){return xp;}
    Player(std::string nameVal="None",int healthVal=0,int xpVal=0);
    Player(const Player &source);
    static int getNumPlayers();
    ~Player();


};

#endif