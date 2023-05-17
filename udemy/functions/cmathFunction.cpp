#include<iostream>
#include<cmath>
#include<iomanip>
#include<limits>
using namespace std;
int main(){
    float n{0.0};
    cout<<"enter a number: ";
    cin>>n;
    cout<<"the square root of "<<n<<" is: "<<sqrt(n)<<endl;
    cout<<"the cube root of "<<n<<" is: "<<cbrt(n)<<endl;
    cout<<"the sine of "<<n<<" is: "<<sin(n)<<endl;
    cout<<"the cosine of "<<n<<" is: "<<cos(n)<<endl;
    cout<<"the ceil of "<<n<<" is: "<<ceil(n)<<endl;//nearest integer not less than the given value
    cout<<"the floor of "<<n<<" is: "<<floor(n)<<endl;//nearest integer not greater than the given value
    cout<<"the round of "<<n<<" is: "<<round(n)<<endl;//nearest integer, rounding away from zero in halfway cases
    cout<<endl;
    cout<<"enter the power to raise "<<n<<" to: ";
    float pvr{};
    cin>>pvr;
    cout<<n<<" raised to "<<pvr<<" is: "<<pow(n,pvr)<<endl;
    return 0;
}