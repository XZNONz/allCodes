#include<iostream>
using namespace std;
int main(){
    int highScore{99};
    int lowScore{49};
    const int *scorePtr{&highScore}; 
    // *scorePtr=90;       //cannot change the value of the poined data
    cout<<*scorePtr<<endl;
    scorePtr=&lowScore;
    cout<<*scorePtr<<endl;

    cout<<"///////////////////CONSTANT POINTERS//////////////////"<<endl;

    int some{45};
    int none{34};
    int *const somePtr{&some};
    cout<<*somePtr<<endl;
    *somePtr=54;
    cout<<*somePtr<<endl;
    // somePtr=&none;   //pointer cannont point somewhere else as it is constant

    cout<<"//////////////////////CONSTANT POINTERS TO POINTERS///////////////"<<endl;

    int roe{24};
    int bow{86};
    const int *const roePtr{&roe};
    cout<<*roePtr<<endl;
    //  BOTH THE POINTER AND THE VALUE IT POINTS TO IS CONSTANT
    // *roePtr=43; 
    // roePtr=&bow; 

    return 0;
}