#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int score {100};
    int *scorePtr(&score);
    cout<<*scorePtr<<endl;

    *scorePtr=300;
    cout<<*scorePtr<<endl;
    cout<<score;            //score value also changed 

    cout<<"///////////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////////"<<endl;

    float highTemp{100.5};
    float lowTemp{35.6};
    float *tempPtr{&highTemp};

    cout<<*tempPtr<<endl;
    tempPtr=&lowTemp;
    cout<<*tempPtr<<endl; 
    cout<<"///////////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////////"<<endl;

    string name{"Frank"};
    string *stringPtr{&name}; 

    cout<<*stringPtr<<endl;

    name="James";
    cout<<*stringPtr<<endl;

    
    cout<<"///////////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////////"<<endl;

    vector<string> pooges{"marry","parry","darry","narry"};
    vector<string>*vectorPtr{&pooges};
    
    cout<<(*vectorPtr).at(0)<<endl;

    cout<<"Pooges:";
    for(auto i: *vectorPtr)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}
