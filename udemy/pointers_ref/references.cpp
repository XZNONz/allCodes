#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num{100};
    int &ref{num};

    cout<<num<<endl;
    cout<<ref<<endl;

    num=234;
    cout<<num<<endl;
    cout<<ref<<endl;

    ref=634;
    cout<<num<<endl;
    cout<<ref<<endl;

    cout<<"//////////////////////////////////////////////////////////////////"<<endl;
    cout<<"//////////////////////////////////////////////////////////////////"<<endl;
    cout<<"//////////////////////////////////////////////////////////////////"<<endl;
    //use const keyword while using reference(&) if you dont want to change the values of the vector
    //use references(&) in range based for loop to change their values and everything
    vector<string>moop{"rappy","trud","durda","dadapapa"};

    for(auto &str:moop)     //by using reference str will be a reference to the actual vector
        str="depressed";

    for(auto str:moop)
        cout<<str<<" ";
    return 0;
}