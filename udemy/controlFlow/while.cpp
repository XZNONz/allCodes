// #include<iostream>
// using namespace std;
// int main(){
//     int num{0};
//     cout<<"enter an integer: ";
//     cin>>num;
//     while(num>=100){
//         cout<<"enter a number less than 100: ";
//         cin>>num;
//     }
//     cout<<"thank you"<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4] {23,53,23,53};
//     int i {0};
//     while(i<2){
//         cout<<arr[i]<<endl;
//         i++;
//     }
//     return  0;
// }
#include<iostream>
using namespace std;
int main(){
    int num{0};
    bool done{false};
    while(!done){
        cout<<"enter a number between 1 and 5."<<endl;
        cin>>num;
        if(num<=1 || num>=5)
            cout<<"nope."<<endl;
        else{
            cout<<"thanks"<<endl;
            done=true; 
        }   
    }
    return 0;
}