#include<iostream>
using namespace std;

void print(int *array,size_t size){
    for(size_t i{0};i<size;i++)
        cout<<*(array+i)<<" ";   
    cout<<endl;
}

int *apply_all(int *array1,size_t size1,int *array2,size_t size2){
    int *newArray{nullptr};
    int next{0};
    newArray=new int[size1*size2];
    for(int i{0};i<size2;i++){
        for(int j{0};j<size1;j++){
            *(newArray+next)=array1[j]*array2[i];
            next++;
        }
    }
    return newArray;
}

int main(){
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};

    cout<<"array 1:";
    print(array1,array1_size);

    cout<<"array 2:";
    print(array2,array2_size);

    int *results=apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t result_size{array1_size*array2_size};

    cout<<"result: ";
    print(results,result_size);    
    delete[] results;
    cout<<endl;
    return 0;
}