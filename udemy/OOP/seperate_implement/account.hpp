#ifndef _ACCOUNT_H_
#define _ACCOUTN_H_
#pragma once
#include<string>
class Account{
    private:

    std::string name;
    double balance;

    public:
    //declared inline
    void setBal(double bal){balance=bal;}
    double getBal(){return balance;}

    //providing the function prototype in the class declaration
    void setName(std::string n);
    std::string getName();

    bool deposit(double amount);
    bool withdrawl(double amount);

};
#endif //_ACCOUNT_H_