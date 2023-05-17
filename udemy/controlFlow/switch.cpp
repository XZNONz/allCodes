/*
switch(integer_control_expr){
    case expression1 : statement1 ; break;
    case expression2 : statement2 ; break;
    case expression3 : statement3 ; break;
    . . . . .
    case expressionN : statementN ; break;
    default : statement_default;
}
 */ 
#include<iostream>
using namespace std;
int main(){
    char letterGrade{};
    cout<<"Enter the grade:";
    cin>>letterGrade;

    switch(letterGrade){
        case 'a'://if 2 or maore case statements are written with one break it is treakted as an or statement.
        case 'A': 
        cout<<"You need 90+ marks to get A grade."<<endl;
        break;
        case 'b':
        case 'B':
        cout<<"You need 80+ marks to get B grade."<<endl;
        break;
        case 'c':
        case 'C':
        cout<<"You need 70+ marks to get C grade."<<endl;
        break;
        case 'f':
        case 'F':{
            char confirm{};
            cout<<"are you sure (Y/N):";
            cin>>confirm;
            if(confirm=='y' ||confirm =='n'){
                cout<<"damn bro you failed."<<endl;
            }else if(confirm=='n'||confirm=='N'){
                cout<<"what do you want man fq are you on ong.";
            }
            else{
                cout<<"Invalid shit entered.";
            }
            break;
            }
        default: 
        cout<<"invalid grade entered(A,B,C,F)."<<endl;
    }
    return 0;
}   