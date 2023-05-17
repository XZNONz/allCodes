#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 {"This is a string"};//initializing and declaring a string
    string s2{"this is some "};
    string s3{"bullshit"};
    cout<<s2+s3<<endl;//concatenation of string
    
    string s4{"ballz"};
    string s5{"nuts"};

    cout<<s4[0]<<endl; //accessing the elements of a string
    cout<<s5.at(3)<<endl;

    s4[0]='t';//changing the values of the elements of a string
    s5.at(3)='c';

    cout<<s4<<endl;
    cout<<s5<<endl;

    for(char c : s5){//prints the string
        cout<<c<<endl;
    }
    for(int c: s4){//gives the ascii values of the characters in string
        cout<<c<<endl;
    }
    
    return 0;
}
