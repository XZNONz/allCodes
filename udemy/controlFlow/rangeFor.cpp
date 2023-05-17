#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    vector<double>temps{80.2,45.23,63.64,57.3};
    double sum{0};
    double average{0};
    for(auto temps : temps){
        sum+=temps;
    }
    if(temps.size()!=0){
    average= sum/temps.size();
    }
    cout<<fixed<<setprecision(2);
    cout<<average<<endl;
    return 0;
}
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  int main(){
//  #include<iostream>
//     for(auto c : "frank how are you"){
//        if(c==' '){
//        cout<<"\t";
//        }else{
//         cout<<c;
//        }
//     }
// return 0;
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     for(auto num : {10,34,23,12,5})
//     cout<<num<<endl;
//     return 0;
// }
