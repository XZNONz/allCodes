#include<iostream>
#include<cstring>
using namespace std;

class Mystring{
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
//overloaded insertion operator
std::ostream &operator <<(std::ostream &os, const Mystring &rhs){
    os<<rhs.str;
    return os;
}
//overloaded extraction operator
std::istream &operator >>(std::istream &in, Mystring &rhs){
    char *buff=new char[1000];
    in>>buff;
    rhs=Mystring{buff};
    delete [] buff;
}

int main(){
    Mystring larry{"larry"};
    Mystring moe{"moe"};
    Mystring curly;

    cout<<"enter the third stooges first name:";
    cin>>curly;
    
    cout<<"The three stooges are "<<larry<<","<<moe<<","<<curly<<endl;

    cout<<"\nEnter the three stooges names separeted by a space: ";
    cin>>larry>>moe>>curly;

    cout<<"The three stooges are"<<larry<<","<<moe<<","<<curly<<endl;

    return 0;
}