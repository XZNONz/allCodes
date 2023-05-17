#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;
int main(){
    int randomNum{};
    size_t count{20};
    int min{1};
    int max{23};
    srand(time(nullptr));//seed the random number generator with time
    for(size_t i{1};i<=count;i++){
        randomNum=rand()%max+min;//random number will be between max and min
        cout<<randomNum<<endl;
    }
    cout<<endl;
    cout<<RAND_MAX<<endl;
    return 0;
}
