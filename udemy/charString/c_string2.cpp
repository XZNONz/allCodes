#include<iostream>
#include<cstring>
using namespace std;
int main(){
   
    char firstName[80] {};
    char lastName[80] {};
    char fullName[80] {};
    char temp[80] {};

    cout<<"Enter your first name: ";
    cin>>firstName;
    
    cout<<"enter your second name: ";
    cin>>lastName;
    cout<<"------------------------------------------------------\n";

    cout<<"hello "<<firstName<<" your first name has "<<strlen(firstName)<<" characters"<<endl;
    cout<<" and your last name has "<<strlen(lastName)<<" characters"<<endl;

    cout<<strcpy(fullName,firstName)<<endl;
    cout<<strcat(fullName," ")<<endl;
    cout<<strcat(fullName,lastName)<<endl;
    cout<<"your full name is "<<fullName;
    return 0;

}

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char fullName [50] {};
//     cout<<"Enter your full name:";
//     cin.getline(fullName,50);
//     cout<<fullName;
//     return 0;
// }

