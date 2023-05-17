#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Player{
    public:

    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string dial){
        cout<<name<<" says "<<dial<<endl;
    }
    bool isDead();
};

class Account{
    public:

    //attributes
    string name;
    double balance;

    //methods
    bool deposit(double bal){balance+=bal;cout<<"in deposit:"<<balance<<endl;}
    bool withdrawl(double bal){balance-=bal;cout<<"in withdrawl:"<<balance<<endl;}
};

int main(){
    Player shivalik;
    shivalik.name="shivalik";
    shivalik.health=100;
    shivalik.xp=23;
    
    shivalik.talk("well hello there random stranger.");

    Player *enemy=new Player;
    enemy->health=500;
    enemy->name="Cornellia";
    enemy->xp=25;
    (*enemy).talk("I will fucking kill you.");
    delete enemy;

    Account shivaliksAccount;
    shivaliksAccount.name="Shivalik's account";
    shivaliksAccount.balance=1000.00;

    shivaliksAccount.deposit(1000.0);
    shivaliksAccount.withdrawl(543.0);

    Account *jimAccount=new Account;
    (*jimAccount).name="Jim's account";
    (*jimAccount).balance=2345.00;
    
    jimAccount->deposit(534.0);
    jimAccount->withdrawl(2000.0);
    delete jimAccount;

    return 0;
}
