#include<iostream>
#include<cstring>
using namespace std;

class MyString{
private:
    char *str; //pointer to a char that holds a C style string
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    ~MyString();
    void display() const;
    int getLength() const;
    const char *getStr() const;
};
//default constructor
MyString::MyString()
    :str{nullptr}{
        str=new char[1];
        *str='\0';
    }
//overloaded constructor
MyString::MyString(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str=new char[1];
            *str='\0';
        }else{
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }
    }
//copy constructor
MyString::MyString(const MyString &source)
    :str{nullptr}{
        str=new char[strlen(source.str)+1];
        strcpy(str,source.str);
    }
//destructor
MyString::~MyString(){
    delete [] str;
}
//display method
void MyString::display() const{
    cout<<str<<" : "<<getLength()<<endl;
}
//length getter 
int MyString::getLength() const{
    return strlen(str);
}
//string getter
const char *MyString::getStr() const{return str;}

int main(){
    MyString empty;
    MyString larry("stooges");
    MyString stooge{larry};

    empty.display();
    larry.display();
    stooge.display(); 
    return 0;
}
