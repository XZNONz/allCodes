#include<iostream>
using namespace std;

int main(){
    int num{};
    int min{30};
    int max{100};
    cout<<"enter a number b/w "<<min<<" and "<<max<<endl;
    cin>>num;

    if(num>=min){
        cout<<"the number is greater than "<<min<<endl;
        int diff{num-min};
        cout<<"num is "<<diff<<" greater than "<<num<<endl;
    }
    if(num<=max){
        cout<<"the number is less than "<<max<<endl;
        int diff{max-num};
        cout<<"num is "<<diff<<" less than "<<max<<endl;
    } 
    if(num>=min && num<=max){
        cout<<num<<" the number is in range"<<endl;
    }
    if(num==min || num==max){
        cout<<num<<" is on the boundary of the range"<<endl;
    }
    return 0;
    
}
