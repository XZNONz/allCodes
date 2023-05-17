#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;
    
    public:

    Player(){ //default constructor
        name="NPC";
        health=10;
        xp=5;
    }

    Player(string nameVal,int healthN,int xpp){ //constructor with arguments
        name=nameVal;
        health=healthN;
        xp=xpp;
    }

    void getName(){
        cout<<name<<endl;
        cout<<health<<endl;
        cout<<xp<<endl;
    }

};

int main(){
    Player one;
    one.getName();

    Player two{"hero",100,50};
    two.getName();

    return 0;
}