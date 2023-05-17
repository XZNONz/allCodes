#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[80];
    strcpy(str,"Hello ");
    strcat(str,"there");
    cout<<strlen(str);
    strcmp(str,"another");
    return 0;
}