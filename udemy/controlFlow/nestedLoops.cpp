// #include<iostream>
// using namespace std;
// int main(){
//     for (int num1 {1}; num1<=10;++num1){
//         for(int num2 {1}; num2<=10;++num2){
//             cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
//         }
//         cout<<"------------------------"<<endl;
//     }
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int grid[5][3];
//     for(int row{0}; row<5;row++){
//         for(int col{0};col<3;col++){
//             grid[row][col]=1000;
//         }
//     }
//     for(int row{0}; row<5;row++){
//         for(int col{0};col<3;col++){
//             cout<<grid[row][col];  
//         }
//         cout<<endl;
//     }
// }
/////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> vector2D{
        {1,2,3},
        {10,20,30,40},
        {100,200,400,550,432}
        };
    for(auto vec:vector2D){//runs for the vectors 1,2,3
        for(auto val: vec){//runs in each vector then goes back to the outer loop
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
