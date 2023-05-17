#include<iostream>
using  namespace std;

void printArray(int num[],size_t size);

int main(){
    int myNum[] {2,4,5,3,2};
    printArray(myNum,5);
    return 0;
}

void printArray(int num[],size_t size){
    for(size_t i{0};i<size;i++){
        cout<<num[i]<<endl;
    }
}
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
//can also change the values of the array using functions
// #include<iostream>
// using namespace std;

// void changeArray(int mun[],int size);

// int main(){
//     int myNum[]{2,54,3,54,34};
//     changeArray(myNum,5);
//     for(auto i:myNum){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// void changeArray(int num[],int size){
//     for(int i{0};i<size;i++)
//         num[i]=0;
// }
////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
//use const keyword in the function to prevent the changing of the array
// #include<iostream>
// using namespace std;

// void changeArray(const int mun[],int size);

// int main(){
//     int myNum[]{2,54,3,54,34};
//     changeArray(myNum,5);
//     for(auto i:myNum){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// void changeArray(const int num[],int size){
//     for(int i{0};i<size;i++)
//         num[i]=0;//will throw error as the values of the array are const 
// }