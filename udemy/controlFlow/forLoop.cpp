// #include<iostream>
// using namespace std;
// int main(){
//     for(int i{0},j{5};i<=5;i++,j++){
//         cout<<i<<"*"<<j<<"="<<(i*j)<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i{10};i<=100;i+=10){
//        if(i%20==0)
//          cout<<i<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    for(int i{10},j{5};i<=15;i++,j--)
        cout<<i<<"-"<<j<<"="<<(i-j)<<endl;
    return 0;
}