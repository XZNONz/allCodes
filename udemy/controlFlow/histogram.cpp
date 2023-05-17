// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int numItems{0};
//     cout<<"how may items do you have:";
//     cin>>numItems;

//     vector<int>data{};

//     for(int i{1};i<=numItems;i++){
//         int enterData{};
//         cout<<"enter the data item "<<i<<" : ";
//         cin>>enterData;
//         data.push_back(enterData);
//     }
//     for(auto val:data){
//         for(int i{1}; i<=val;i++){
//             cout<<"-";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {

    int result{0};
    for(int i{0}; i<vec.size();i++){
        for(int j{0};j<i;j++){
            int mul{};
            mul=vec.at(i)*vec.at(j);
            result+=mul;
        }
    }
    return result;
}
int main(){
    cout<<calculate_pairs({2, 4, 6, 8})<<endl;   
    return 0;
} 







    
