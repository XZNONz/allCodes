#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1{};
    int n{};
    cout<<"enter a word string: ";
    getline(cin,s1);
    n=s1.length();
    for(int i{1};i<=n;i++){
        for(int j{n-i};j>0;j--){
            cout<<" ";
        }
        for(int k{1},r{0};k<=i;k++,r++){
            cout<<" "<<s1.at(r);
        }
        cout<<endl;
    }
    return 0;
}