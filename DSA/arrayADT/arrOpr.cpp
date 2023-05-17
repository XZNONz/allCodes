#include<iostream>
using namespace std;

// struct Array{
//     int *A;
//     int size;
//     int length;
// };

struct Array{
    int A[10];
    int size;
    int length;
};

void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(struct Array *arr,int index,int x){
    if(index>=0 && arr->length>index){
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}
void display(Array arr){
    cout<<"the elements of the array are:"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
    cout<<"/n/n";
    cout<<"the length of the array is:"<<arr.length<<endl;
    cout<<"the size of the array is:"<<arr.size;
}

int Delete(struct Array *arr,int index){
    int x=0;

    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;

        cout<<"The deleted elment is: "<<x<<endl;
    }
    return 0;
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int linearSearhBetter(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]==key){
            // swap(&arr->A[i],&arr->A[i-1]);      //transposition
            swap(&arr->A[i],&arr->A[0]);        //moveToHead
            return i;
        }
    }
    return -1;
}

int linearSearch(struct Array arr, int key){
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]==key)
            return i;
    }
    return -1;
}

int main(){

    struct Array arr={{1,2,3,4,5},10,5};
    
    // struct Array arr;
    // int n;

    // cout<<"enter the size of the array:";
    // cin>>arr.size;

    // arr.A= new int[arr.size];
    // arr.length=0;

    // cout<<"enter the number of elements in the array:";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr.A[i];
    //     cout<<endl;
    // }
    // arr.length=n;

    // append(&arr,10);
    // insert(&arr,2,45);
    // Delete(&arr,2);
    // cout<<linearSearch(arr,5)<<endl;
    cout<<linearSearhBetter(&arr,4)<<endl;   

    display(arr);
    return 0;
}