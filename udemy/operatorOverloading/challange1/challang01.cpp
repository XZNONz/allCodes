#include<iostream>
#include<cstring>
using namespace std;

class Mystring
{
    friend Mystring operator+(const Mystring &rhs, const Mystring &lhs);
    friend std::ostream &operator <<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator >>(std::istream &in, Mystring &rhs);
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

    //////////////////////////////////////////////
    Mystring operator -() const;
    bool operator ==(const Mystring &rhs)const;
    bool operator !=(const Mystring &rhs) const;
    bool operator <(const Mystring &rhs) const;
    bool operator >(const Mystring &rhs) const;
    Mystring &operator +=(const Mystring &rhs);
    Mystring operator *(int n)const;
    Mystring &operator *=(int n);
    Mystring &operator ++();
    Mystring operator ++(int);
    // Mystring operator--(int);
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

Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str=nullptr;
        cout<<"move constructor used"<<endl;
    }

Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str=new char[strlen(source.str)+1];
        strcpy(str,source.str);
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

Mystring &Mystring::operator=(const Mystring &rhs){
    if(this==&rhs)
        return *this;
    delete [] str;
    str=new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}

std::ostream &operator <<(std::ostream &os, const Mystring &rhs){
    os<<rhs.str;
    return os;
}

std::istream &operator >>(std::istream &in, Mystring &rhs){
    char *buff= new char[1000];
    in>>buff;
    rhs=Mystring{buff};
    delete [] buff;
}
//- operator overloading
Mystring Mystring::operator-()const{
    char *buff= new char[strlen(str)+1];
    strcpy(buff,str);
    for(size_t i=0;i<strlen(buff);i++){
        buff[i]=tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs)const{
    if(strcmp(str,rhs.str)==0)
        return true;
    else
        return false;
}    

bool Mystring::operator !=(const Mystring &rhs) const{
    if(strcmp(str,rhs.str)==1)
        return true;
    else   
        return false;
}
bool Mystring::operator <(const Mystring &rhs) const{
    if((str<rhs.str)==1){
        return true;
    }else{
        return false;
    }
}
bool Mystring::operator >(const Mystring &rhs) const{
    if((str>rhs.str)==1){
        return true;
    }else{
        return false;
    }
}

Mystring operator+(const Mystring &rhs, const Mystring &lhs){
    size_t buffSize= strlen(lhs.str)+strlen(rhs.str)+1;
    char *buff= new char[buffSize];
    strcpy(buff,rhs.str);
    strcat(buff,lhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

Mystring &Mystring::operator +=(const Mystring &rhs){
    *this=*this+rhs;
    return *this; 
}

Mystring Mystring::operator *(int n)const{
    Mystring temp;
    for(int i=1;i<=n;i++)
        temp=temp+*this;
    return temp;
}

Mystring &Mystring::operator *=(int n){
    *this=*this*n;
    return *this;
}

Mystring &Mystring::operator++(){
    for(size_t i=0;i<strlen(str);i++)
        str[i]=toupper(str[i]);
    return *this;
}

Mystring Mystring::operator++(int){
    Mystring temp(*this);
    operator++();
    return temp;
}

int main(){
    cout<<boolalpha;
    Mystring one{"ball"};
    Mystring two{"DEEX"};
    Mystring three{"juice"};
    Mystring four{-two};
    cout<<(one==two)<<endl;
    cout<<(one!=two)<<endl;
    cout<<(one<two)<<endl;
    cout<<(one>two)<<endl;
    Mystring dgg=one+two;
    Mystring off{"tree"};
    cout<<++one<<"\n";
    cout<<three++<<"\n";
    cout<<off*3<<endl;
    off*=5;
    cout<<off<<endl;
    cout<<dgg;
    dgg+=one;
    dgg=dgg+one;
    return 0;
}