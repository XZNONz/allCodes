#include<iostream>
using namespace std;
int main(){
    int score{};
    cout<<"Enter you score "<<": ";
    cin>>score;
    if(score<=100 && score>=0){
        if(score>90){
            cout<<"A grade";
        }
        else if(score>80){
            cout<<"B grade";
        }
        else if(score>70){
            cout<<"C grade";
        }
        else{
            cout<<"F grade:::fail";
        }
    }else{
        cout<<"sorry invalid score!!";
    }
    return 0;
}
