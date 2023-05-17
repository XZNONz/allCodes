#include<iostream>
using namespace std;

int main(){
    int target{10};
    int num{0};
    cout<<"enter a number and ill compare it to "<<target<<" : ";
    cin>>num;
    if(num>=target){
        cout<<"the number is greater than "<<target<<endl;
        int diff{num-target};
        cout<<num<<" is "<<diff<<" greater than "<<target<<endl;
    }else{
        cout<<"the number is less than "<<target<<endl;
        int diff{target-num};
        cout<<num<<" is "<<diff<<" less than "<<target<<endl;
    }
    return 0;
    
}