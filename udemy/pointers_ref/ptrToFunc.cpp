#include<iostream>
#include<string>
#include<vector>
using namespace std;

void doubleData(int *intPtr){
    *intPtr *=2;
}
void swap(int *a,int *b){
    int rpt=*a;
    *a=*b;
    *b=rpt;
}
void display(vector<string>*v){
    for(auto i:*v)
        cout<<i<<" ";
    cout<<endl;
    (*v).push_back("lloyd");
}
void display(int *array,int sentinel){
    while(*array!=sentinel){
        cout<<*array++<<" ";
    }
    cout<<endl;
}
int main(){
    int value{34};
    int *intPtr{nullptr};
    cout<<&value<<endl;
    doubleData(&value);
    cout<<value<<endl;

    cout<<"--------------------------------------"<<endl;
    //can assign the address of the value to the pointer and use it as an argument
    intPtr=&value;
    doubleData(intPtr);
    cout<<value<<endl;
    cout<<"----------------------------------------"<<endl;
    int man{234};
    int *ptr2{&man};
    doubleData(ptr2);
    cout<<man<<endl;
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

    int x{678},y{345};
    cout<<"value of x is: "<<x<<endl;
    cout<<"vlaue of y is: "<<y<<endl;
    swap(&x,&y);
    cout<<"value of x is: "<<x<<endl;
    cout<<"vlaue of y is: "<<y<<endl;
    cout<<"---------------------------------------------------------------"<<endl;

    vector<string>names {"meti","betty","letty","trippy"};
    display(&names);
    cout<<"----------------------------------------------------------------"<<endl;

    int ropes[]{234,543,23,546,65,-1};
    display(ropes,-1);
    return 0;
}