#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1{"we out here"};
    string s2{"dunno"};
    s1.swap(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}