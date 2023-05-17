#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int length{},width{},height{};
    int volume{};
    int tier1Thr{100};
    int tier2Thr{500};
    double tier1Char{0.10};
    double tier2Char{0.25};
    int maxDimention{10};
    double baseCost{2.50};
    cout<<"Enter the length width and height of the package seperated by spaces"<<endl;
    cin>>length>>width>>height;

    if(length>maxDimention||width>maxDimention||height>maxDimention){
        cout<<"Sorry the dimentions exceeded.";
    }
    else{
     double packageCost{};
     volume=length*width*height;  
     packageCost=baseCost;
     if(volume>tier2Thr){
        packageCost+=packageCost*tier2Char;
     }
     else if(volume>tier1Thr){
        packageCost+=packageCost*tier1Char;
     } 
    cout<<"The volume of you package is:"<<volume<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"The cost of you package is: $"<<packageCost;
    }
    return 0;
}