#include<iostream>
using namespace std;
void printArray(int[],int);
void setArray(int[],int,int);    
int main(){
    int my_scores[]{100,98,90,86,84};
    printArray(my_scores,5);
    setArray(my_scores,5,100);
    printArray(my_scores,5);
    return 0;
}

void printArray(int bruh[],int size){
    for(int i{0};i<size;i++){
        cout<<bruh[i]<<" ";
    }
    cout<<endl;
}

void setArray(int tra[],int size,int value){
    for(int i{0};i<size;i++){
        tra[i]=value;
    }
}