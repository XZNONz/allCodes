#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    cout<<"enter a string:"<<endl;
    getline(cin,s1);//using getlie to take whole string as input
    cout<<s1<<endl;
    string s2;
    cout<<"enter another string with x in between"<<endl;
    getline(cin,s2,'x');//'x' is a delimiter it stops reading the string if the char in delemiter is entered
    cout<<s2;
    return 0;
    
}
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1{"apple"};
//     string s2(s1,0,3);
//     cout<<s2<<endl;
//     string s3(10,'Z');
//     cout<<s3;
//     return 0;
// }