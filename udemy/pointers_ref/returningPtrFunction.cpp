#include<iostream>
using namespace std;

int *largestInt(int *int1,int *int2){
    if(*int1>*int2)
        return int1;
    else
        return int2;
}

int main(){
    int a{435};
    int b{456};
    int *largestPtr{nullptr};
    largestPtr=largestInt(&a,&b);
    cout<<*largestPtr<<endl;
    return 0;
}
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

//function to create an array using pointers and returning pointers
// #include<iostream>
// using namespace std;

// int *createArray(int size,int value=0){
//     int *newStorage{nullptr};
//     newStorage=new int[size];
//     for(int i{0};i<size;i++)
//         *(newStorage+i)=value;
//     return newStorage;
// }
// void display(const int *const array,int size){
//     for(int i{0};i<size;i++)
//         cout<<*(array+i)<<" ";
//     cout<<endl;
// }

// int main(){
//     int size{};
//     int value{};
//     int *myArray{nullptr};
//     cout<<"enter the size of your array:";
//     cin>>size;
//     cout<<"enter the value you want to initialize it to:";
//     cin>>value;
//     myArray=createArray(size,value);
//     display(myArray,size);
//     delete[] myArray;
//     return 0;
// }