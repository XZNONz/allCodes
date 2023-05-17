#include<iostream>
#include<vector>
using namespace std;

void test(int formal){
        cout<<formal<<endl;
        formal=100;
        cout<<formal<<endl;
}
void passByValue(vector<string>v){
    v.clear();
}
void pass2(vector<string>v){
    v.push_back("rabbit");
    for(auto s:v)
        cout<<s<<" ";
    cout<<endl;
}
void print_vector(vector<string>v){
    for(auto s: v)
        cout<<s<<" ";
    cout<<endl;
}
int main(){
    int actual{50};
    cout<<actual<<endl;
    test(actual);
    cout<<actual<<endl;
    vector<string>stooges{"rank","dreank","derrek"};
    print_vector(stooges);
    pass2(stooges);

    return 0;
}