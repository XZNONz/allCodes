#include<iostream>
#include<cstring>

using namespace std;

class Mystring{
    friend bool operator==(const Mystring &lhs,const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs,const Mystring &rhs);
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    // Mystring &operator-(Mystring &&rhs);

    void display() const;

    int getLength() const;
    const char *getStr() const;
};

Mystring::Mystring()
    :str{nullptr}{
        str=new char[1];
        *str='\0';
    }

Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str=new char[1];
            *str='\0';
        }else{
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }
    }

Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str=new char[strlen(source.str)+1];
        strcpy(str,source.str);
    }

Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str=nullptr;
        cout<<"move constructor used"<<endl;
    }

Mystring::~Mystring(){
    delete [] str;
}

void Mystring::display() const{
    cout<<str<<":"<<getLength()<<endl;
}

int Mystring::getLength() const{
    return strlen(str);
}

const char *Mystring::getStr()const{return str;}
//equality operator overloading
bool operator==(const Mystring &lhs,const Mystring &rhs){
    if(strcmp(lhs.str,rhs.str)==0)
        return true;
    else
        return false;
}

//Make lowercase
Mystring operator-(const Mystring &obj){
    char *buff=new char[strlen(obj.str)+1];
    strcpy(buff,obj.str);
    for(size_t i=0;i<strlen(buff);i++){
        buff[i]=tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}
//Concatenation
Mystring operator+(const Mystring &lhs,const Mystring &rhs){
    size_t buffSize= strlen(lhs.str)+strlen(rhs.str)+1;
    char *buff= new char[buffSize];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);

    Mystring temp{buff};
    delete [] buff;
    return temp;
}

Mystring &Mystring::operator=(const Mystring &rhs){
    if(this==&rhs)
        return *this;
    delete [] str;
    str=new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}


int main(){
    Mystring larry{"LAARRY"};
    larry.display();
    
    larry=-larry;
    larry.display();

    cout<<boolalpha<<endl;
    Mystring moe("Moe");
    Mystring stooges=larry;
    
    cout<<(larry==moe)<<endl;
    cout<<(larry==stooges)<<endl;

    larry=larry+" balls";
    larry.display();

    Mystring nuts=stooges+" "+larry+" "+moe;
    nuts.display();
    return 0;
}