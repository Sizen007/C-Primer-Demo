//
// Created by sizen on 12.05.20.
//

#ifndef U10_5_CUSTOMER_H
#define U10_5_CUSTOMER_H
#include <iostream>
#include <cstring>
using namespace std;

struct Customer{
    char fullname[35];
    double payment;
};

typedef Customer element;

class Stack{
private:
    static const int m_capacity = 10;
    int m_len = 0;
    element c[m_capacity];
public:
    Stack(){m_len = 0;}
    bool Push(const element data);
    bool Delete(element &data);
    bool isFull();
    bool isEmpty();
    void display();
};
void Stack::display() {
    int sum = 0;
    cout<<"m_len is: "<<m_len<<endl;
    for(int i = 1;i < m_len+1;i++){
        cout<<"No."<<i<<" member: "<<c[i].fullname<<" "<<c[i].payment<<endl;
        sum+=c[i].payment;
    }
    cout<<"sum is: "<< sum <<endl;
}

bool Stack::Push(const element data) {
    if(isFull() == true){
        return false;
    }else{
        c[++m_len] = data;
        return true;
    }
}

bool Stack::Delete(element &data) {
    if(isEmpty() == true){
        return false;
    }else{
        data = c[--m_len];
        return true;
    }
}

bool Stack::isFull() {
    if(m_len >= m_capacity){
        return true;
    }else{
        return false;
    }
}

bool Stack::isEmpty() {
    if(m_len <= 0){
        return true;
    }else{
        return false;
    }
}

#endif //U10_5_CUSTOMER_H
