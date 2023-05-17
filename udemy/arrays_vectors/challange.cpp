#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>vector1;
    vector<int>vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"The 1st element of the vector 1 is: "<<vector1.at(0)<<endl;
    cout<<"The 2nd element of the vector 2 is: "<<vector1.at(1)<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"The 1st element of the vector 2 is: "<<vector2.at(0)<<endl;
    cout<<"The 2nd element of the vector 2 is: "<<vector2.at(1)<<endl;
    vector<vector<int>>vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout<<"1nd element of 2d vector is: "<<vector2d.at(0).at(0)<<endl;
    cout<<"2nd element of 2d vector is: "<<vector2d.at(0).at(1)<<endl;
    cout<<"3nd element of 2d vector is: "<<vector2d.at(1).at(0)<<endl;
    cout<<"3nd element of 2d vector is: "<<vector2d.at(1).at(1)<<endl;
    vector1.at(0)=1000;
    cout<<"1nd element of 2d vector is: "<<vector2d.at(0).at(0)<<endl;
    cout<<"2nd element of 2d vector is: "<<vector2d.at(0).at(1)<<endl;
    cout<<"3nd element of 2d vector is: "<<vector2d.at(1).at(0)<<endl;
    cout<<"3nd element of 2d vector is: "<<vector2d.at(1).at(1)<<endl;
    cout<<"The 1st element of vector 1 is: "<<vector1.at(0)<<endl;
    cout<<"The 2nd element of vector 1 is: "<<vector1.at(1)<<endl;

    return 0;
}