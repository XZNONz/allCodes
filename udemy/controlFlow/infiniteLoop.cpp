//////////////////////////////////////////////////////
/////////////////DONT RUN INFINITE LOOP//////////////
////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main(){
    while(true){
        char again {};
        cout<<"do you want to loop again: (y/n)";
        cin>>again;
        if(again=='N'||again=='n')
            break;
    }
    return 0;
}