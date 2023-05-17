// #include<iostream>
// using namespace std;
// void swap(int &x,int &y);
// int main(){
//     int a{23};
//     int b{42};
//     swap(a,b);
//     return 0;
// }

// void swap(int &x,int &y){
//     int temp = x;
//     x=y;
//     y=temp;
//     cout<<"the swapped values are: "<<endl;
//     cout<<x<<endl;
//     cout<<y;
// }

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v);
int main(){
    vector<int>data {1,3,4,5,6,5};
    print(data);
    return 0;
}

void print(vector<int>&v){
    for(auto num:v)
        cout<<num<<endl;
}