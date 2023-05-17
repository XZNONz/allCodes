#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>movieRatings{
        {2,4,5,3},
        {3,5,3,1},
        {2,5,6,3}
    };

    cout<<movieRatings[1][2]<<endl;
    cout<<movieRatings.at(2).at(2)<<endl;
    
    return 0;
}