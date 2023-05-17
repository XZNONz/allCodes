#include<iostream>
#include<string>
using namespace std;

class player{
    private:
    string name;
    int health;
    int xp;
    public:
    void setName(string nameval){   
        name=nameval;
    }
    //a no argument constructor is made 
    //constructors have the same name as the class and require no return type
    player(){
        cout<<"no args constructor called"<<endl;
    }
    player(string name){
        cout<<"single argument constructor called"<<endl;
    }
    player(string name,int health,int xp){
        cout<<"three args constructor called"<<endl;
    }
    
    ~player(){
        cout<<"destructor called"<<endl;
    }
};

int main(){
    {
        player slayer;
        slayer.setName("Slayer");
    }

    {
        player neighbour("nigg");
        neighbour.setName("nigg");
        player treat;
        treat.setName("treat");
        player retard("retard",323,100);
        retard.setName("retard");
        player nigggggggs;
        nigggggggs.setName("nigggggs");
    }

    player *enemy= new player;
    enemy->setName("enemy1");

    player *boss = new player("level boss", 10000,9999);
    boss->setName("armagadon");

    delete enemy;
    delete boss;

    return 0;
}