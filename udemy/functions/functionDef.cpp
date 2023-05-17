#include<iostream>
#include<cmath>
using namespace std;
const float pi{3.14};
float areaCircle(float rad){
    return pi*(pow(rad,2));
}

void circleArea(){
    float rad{};
    cout<<"enter the readius of circle: ";
    cin>>rad;

    cout<<"area of circle is: "<<areaCircle(rad)<<endl;
}

float cylinderVol(float rad,float height){
    return (areaCircle(rad)*height);
}
void volumeCylinder(){
    float rad{};
    float height{};
    cout<<"enter the radius and the height of the cylinder"<<endl;
    cin>>rad>>height;
    cout<<"the volume of the cylinder is: "<<cylinderVol(rad,height);
}
int main(){
    circleArea();
    volumeCylinder();
    return 0;
}