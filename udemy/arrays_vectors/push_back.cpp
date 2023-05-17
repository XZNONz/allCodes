#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>numbers{90,100,99,32,65};
    numbers.push_back(90); //using push_back to add 90 at the end of the vector
    cout<<numbers.at(5)<<endl;
    numbers.push_back(100); //90,100,99,32,65,90,100
    cout<<numbers.at(6)<<endl;

    vector<int>scores{87};
    int addScore;
    cin>>addScore;
    scores.push_back(addScore);
    cin>>addScore;
    scores.push_back(addScore);
    cout<<scores.at(0)<<endl;
    cout<<scores.at(1)<<endl;
    cout<<scores.at(2)<<endl;

    cout<<scores.size()<<endl; //.size() to see the size of the vector

    // iterative code for printing the elements of the vector
    for(int i=0;i<scores.size();i++){
        cout<<"Element "<<i+1<<" of the vector is: "<<scores.at(i)<<endl;
    }

    return 0;
}