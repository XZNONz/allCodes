#include<iostream>
using namespace std;
int main(){
    int *intPtr{nullptr};
    intPtr= new int;
    cout<<intPtr<<endl;     //shows the address of the new integer created
    cout<<*intPtr<<endl;    //displayes garbage value as nothing is assigned
    *intPtr=93;
    cout<<*intPtr<<endl;
    delete intPtr;

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

    cout<<"///////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////////////////////////////////////////////////"<<endl;
    
    int *arrayPtr{nullptr};
    int size{5};
    arrayPtr= new int[size];
    for(int i{0};i<5;i++){
        cout<<"enter the elements of the array "<<i<<" : ";
        cin>>*(arrayPtr+i);
    }
    for(int i{0};i<5;i++){
        cout<<"the value of the elements of the array at "<<i<<" = ";
        cout<<arrayPtr[i]<<endl;
    }
    delete[] arrayPtr;
    return 0;
}
