#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> sounds {1,2,4-1,4,-99,12,10,23};
    for(auto sounds:sounds){
        if(sounds==-99)
            break;//break statement terminates the loop if executed and the loop is exited.
        else if(sounds==-1)
            continue;//if continue is used then no further statements of the loop are executed and the control goes back to the beginnig of the loop
        else
            cout<<sounds<<endl;        
    }
    return 0;
}
