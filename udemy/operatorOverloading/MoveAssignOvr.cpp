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
    MyString(MyString &&source);
    MyString &operator=(MyString &&rhs);
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
//move constructor
MyString::MyString(MyString &&source)
    :str(source.str){
        source.str=nullptr;
        cout<<"move constructor used"<<endl;
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

MyString &MyString::operator=(MyString &&rhs){
    cout<<"using move assignment"<<endl;
    if(this==&rhs)
        return *this;
    delete [] str;
    str=rhs.str;
    rhs.str=nullptr; 
    return *this;
}

int main(){
    MyString a{"kjhgk"};
    a.display();
    a=MyString{"HOla"};
    a.display();
    a="bonjour";
    a.display();
    // MyString empty;
    // MyString larry("stooges");
    // MyString stooge{larry};

    // empty.display();
    // larry.display();
    // stooge.display(); 
    return 0;
}
