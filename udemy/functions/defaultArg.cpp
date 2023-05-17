#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

double calcCost(double baseCost, double taxRate=0.06,double shipping=3.45);//assigning values to arguments in the function so they are set to default
string fullName(string firstName,string prefix="Balls. ",string suffix=" Fondler" );
int main(){
    double cost{0};
    cost=calcCost(290);
    cout<<fixed<<setprecision(2);
    cout<<cost<<endl;

    cost=calcCost(450,0.9);
    cout<<fixed<<setprecision(2);
    cout<<cost<<endl;

    cost=calcCost(432,0.08,5.45);
    cout<<fixed<<setprecision(2);
    cout<<cost<<endl;

    string name;

    name=fullName("david");
    cout<<name<<endl;

    name=fullName("balls","not balls ");
    cout<<name<<endl;

    name=fullName("chris ","ass ","handler ");
    cout<<name<<endl;

    return 0;
}

string fullName(string firstName,string prefix,string suffix){
    string concat;
    concat=prefix+firstName+suffix;
    return concat;
}

double calcCost(double baseCost, double taxRate,double shipping){//if the valus are alreay assigned in the prototype dont do it again in the function 
    return baseCost+=(baseCost*taxRate)+shipping;
}