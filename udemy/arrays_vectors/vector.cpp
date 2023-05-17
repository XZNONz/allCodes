#include<iostream>
#include<vector>
using namespace std;

int main(){
    //initialilzing vectors
    vector<char>vowels{'a','e','i','o','u'};
    vector<float>temperature(364,80.6); //364 elements in vector all set to 80.6
    vector<int>scores{90,45,32,67,87,45};
    vector<int>cat{10,23,24,64,54,23,74};

    // accessing vectors in array syntax
    cout<<scores[5]<<endl;
    cout<<temperature[90]<<endl;
    cout<<vowels[2]<<endl;
    cat.at(3)=43;
    cat.at(cat.size()-1)=32; //changing the last element of vector cat

    // accessing vector using vector syntax(using at)
    //using the .at keywrod to acces the element
    cout<<cat.at(4)<<endl; 
    cout<<cat.at(3)<<endl; 
    cout<<cat.at(cat.size()-1)<<endl; 
    cout<<vowels.at(3)<<endl;
    cout<<temperature.at(234)<<endl;

    //changing or giving values to elements in vector
    vector<int>numbers(10);
    cout<<"Enter the value to be assigned: ";
    cin>>numbers.at(8);
    cout<<"The value at 8th element of vector is: "<<numbers.at(8)<<endl;
    numbers.at(5)=23;
    cout<<"The element at index 5 is "<<numbers.at(5)<<endl;

    return 0;
}