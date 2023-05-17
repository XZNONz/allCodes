#include<iostream>
#include<string>
#include<vector>
using namespace std;

void get(int);
void get(double);
void get(vector<string>);
void get(string);

int main(){
    get(45);
    get("what the fuck");
    vector<string>s{"harry","barry","scarry"};
    get(s);
    get(34.54);
    return 0;
}

void get(int a){
    cout<<"the integer is:"<<a<<endl;
}
void get(double a){
    cout<<"the float value is:"<<a<<endl;
}
void get(string t){
    cout<<"the string is:"<<t<<endl;
}
void get(vector<string>s){
    for(auto a:s){
        cout<<a<<" ";
    }
    cout<<endl;
}