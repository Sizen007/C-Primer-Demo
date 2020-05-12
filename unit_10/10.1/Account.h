//
// Created by sizen on 11.05.20.
//

#ifndef INC_10_1_ACCOUNT_H
#define INC_10_1_ACCOUNT_H
#include <iostream>
#include <cstring>
using namespace std;

class Account{
private:
    char m_name[20];
    string m_id;
    int m_money;
public:
    void setAccount(){
        strcpy(m_name,"wang");
        m_id = "1";
        m_money = 100;
    }

    void setAccount(const char* name, const string id, const int money){
        strcpy(m_name ,name);
        m_id = id;
        m_money = money;
    }

    void display(){
        cout<<"name is "<<m_name<<" id is "<<m_id<<" money is "<<m_money<<endl;
    }
};

#endif //INC_10_1_ACCOUNT_H
