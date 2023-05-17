#include<iostream>
#include<cctype>
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
    MyString operator-() const;
    bool operator==(const MyString &rhs);
    MyString operator +(const MyString &rhs);
    void displayStr(){
        for(int i{0};i<strlen(str);i++)
            cout<<str[i];
        cout<<endl;
    }
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

MyString MyString::operator -() const{
    char *buff=new char[strlen(str)+1];
    strcpy(buff,str);
    for(size_t i{0};i<strlen(buff);i++)
        buff[i]=tolower(buff[i]);
    MyString temp{buff};
    delete buff;
    return temp;
}

bool MyString::operator==(const MyString &rhs){
    return(strcmp(str,rhs.str)==0);
}

MyString MyString::operator +(const MyString &rhs){
    size_t buffSize=strlen(str)+strlen(rhs.str)+1;

    char *buff=new char[buffSize];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    MyString temp{buff};
    delete buff;
    return temp;
}

int main(){
    cout<<boolalpha;
    MyString lloys{"LLOYD"};
    lloys.display();
    MyString asdf=-lloys;
    asdf.displayStr();
    cout<<(lloys==asdf)<<endl;

    MyString larry{"Larry"};
    MyString stooges= larry+"marry";
    MyString moe{"Moe"};
    MyString twoStooges=moe+" "+"larry";
    twoStooges.display();
    return 0;
}

