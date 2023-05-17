#include<iostream>
using namespace std;
int main(){
    int scores[]{100,34,46,64};
    cout<<scores<<endl;
    cout<<*scores<<endl;

    int *scorePtr{scores};
    cout<<scorePtr<<endl;
    cout<<*scorePtr<<endl;
    cout<<"scores:\n";
    cout<<scorePtr[0]<<endl;
    cout<<scorePtr[1]<<endl;
    cout<<scorePtr[2]<<endl;
    cout<<scorePtr[3]<<endl; 
    cout<<"/////////////////////////////"<<endl;
    //will give the addresses of the array elements
    cout<<scorePtr<<endl;
    cout<<(scorePtr+1)<<endl;
    cout<<(scorePtr+2)<<endl;
    // will give the valued of the elements of the array
    cout<<*scorePtr<<endl;
    cout<<*(scorePtr+1)<<endl;
    cout<<*(scorePtr+2)<<endl;
    cout<<"////////////////////////////////////"<<endl;
    //subscript notation
    cout<<scores[2]<<endl;
    cout<<scorePtr[3]<<endl;
    //offset notation
    cout<<*(scores)<<endl;
    cout<<*(scorePtr+3)<<endl;
    return 0;
}