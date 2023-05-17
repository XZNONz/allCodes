// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n{};
//     cout<<"no. of rows you want: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int k=n-i;k>0;k--){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n{};
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j{n-i};j>0;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}