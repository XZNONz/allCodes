#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 {"This is a string"};//initializing and declaring a string
    string s2 {"this is a test"};
    string s3{"i dont want to be here"};
    string s4{"StephenHawking"}; 
    //use of .substr(startingIndex  ,length) prints the substring 
    cout<<s1.substr(3,5)<<endl;
    cout<<s1.substr(10,4)<<endl;
    cout<<s1.substr(10,6)<<endl;

    //use of .find() to find the substring in the string
    cout<<s2.find("is")<<endl;
    cout<<s2.find("is",4)<<endl;//finds the substring after the 4th index
    cout<<s2.find("test")<<endl;
    
    //use of .erase() and .clear() to erase substrings and deleting whole string
    cout<<s1.erase(0,5)<<endl;//"is a string"
    cout<<s2.erase(3,6)<<endl;//"thi test"
    s1.clear();//the string has been  cleard

    //use of .length() 
    cout<<s3.length()<<endl;
    s3+=" at the university this place fucking sucks";
    cout<<s3<<endl;

    //use of .instert(index,what you want to insert)
    s4.insert(7," ");
    cout<<s4<<endl;
    
    return 0;
}