#include<iostream>
using namespace std;

int main(){
    //declaring an array
    int array[5]{0};
    // initializing an array
    array[0]=1;
    array[1]=3;
    array[2]=13;
    array[3]=23;
    array[4]=33;

    int score[5]{1,2,3,4,5}; //declaring and initializing an array in the same line

    const int daysInYear{365};
    double arr[daysInYear] {0,32,4532};
    
    cout<<"The thrid element of the array is:"<<array[3]<<endl;
    cout<<"The fourth element of the array is:"<<score[4]<<endl;   
    cout<<"The second element of the array is:"<<arr[2]<<endl;

    int dog[5]; 
    cin>>dog[0];
    cin>>dog[1];
    cin>>dog[2];
    cin>>dog[3];
    cin>>dog[4];
    
    // iterative way to display the elements of the array
    for(int i=0;i<5;i++){
    cout<<"Element "<<i+1<<" element of the array dog is "<<dog[i]<<endl;
    }


    /*
    *
    *              MORE CODE 
    * 
    * 
    *
    char vowels[] {'a','e','i','o','u'};
    cout<<"the first vowel is: "<<vowels[0]<<endl;

    //or

    for(int i=0;i<5;i++){
        cout<<"Vowel "<<i+1<<" is ("<<vowels[i]<<")"<<endl;
    }
    */

    return 0;
}