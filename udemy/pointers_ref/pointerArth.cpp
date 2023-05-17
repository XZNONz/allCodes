#include<iostream>
#include<string>
using namespace std;
int main(){
    int rat[]{32,54,64,23,65,89,-5};
    int *ratPtr{rat};

    while(*ratPtr!=-5){
        cout<<*ratPtr<<endl;
        ratPtr++;
    }

    cout<<"///////////////////////////////////////////"<<endl;

    ratPtr=rat;
    while(*ratPtr!=-5){
        cout<<*ratPtr++<<endl;
    }

    cout<<"///////////////////////////////////////////"<<endl;

    string s1{"frank"};
    string s2{"frank"};
    string s3{"james"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};     

    cout<<boolalpha;
    cout<<p1<<"=="<<p2<<":"<<(p1==p2)<<endl;
    cout<<p1<<"=="<<p2<<":"<<(p1==p3)<<endl;

    cout<<*p1<<"=="<<*p2<<":"<<(*p1==*p2)<<endl;
    cout<<*p1<<"=="<<*p3<<":"<<(*p1==*p3)<<endl;

    p3=&s3;
    cout<<*p1<<"=="<<*p3<<":"<<(*p1==*p3)<<endl;

    cout<<"///////////////////////////////////////////"<<endl;

    char name[]{"Frank"};   //F r a n k \0

    char *charPtr1{nullptr};
    char *charPtr2{nullptr};

    charPtr1=&name[0];
    charPtr2=&name[4];
    //using the - operator on the pointers
    //(charPtr2 - charPtr1)
    cout<<"in the string "<<name<<" ,"<<*charPtr2<<" is "<<(charPtr2-charPtr1)<<"characters away from "<<*charPtr1<<endl;
    return 0;
}