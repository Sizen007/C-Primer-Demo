#include <iostream>
#include <cstring>
using namespace std;

struct Customer{
    char fullname[35];
    double payment;
};

typedef Customer ElemType;

class Stack{
private:
    static const int m_size = 100;
    ElemType m_data[m_size];
    int m_top;
public:
    Stack(){m_top = 0;}
    bool Push(const ElemType data);
    bool Pop(ElemType &data);
    bool isEmpty()const;
    bool isFull()const;
    void showStack();
};

void Stack::showStack() {
    int sum = 0;
    cout<<"m_top is: "<<m_top<<endl;
    for(int i = 1; i<m_top+1;i++){
        sum += m_data[i].payment;
        cout<<"No."<<i<<" member: "<<m_data[i].fullname<<" "<<m_data[i].payment<<endl;
    }
    cout<<"Total payment is: "<<sum<<endl;
}

bool Stack::Push(const ElemType data) {
    if(isFull() == true){
        return false;
    }else{
        m_data[++m_top] = data;
        return true;
    }
}

bool Stack::Pop(ElemType &data) {
    if(isEmpty() == true){
        return false;
    }else{
        data = m_data[--m_top];
        return true;
    }
}

bool Stack::isEmpty() const {
    return m_top == 0 ? true : false;
}

bool Stack::isFull() const {
    return m_top == m_size ? true : false;
}

int main() {
    Stack s;
    Customer c1,c2,c3;
    strcpy(c1.fullname,"dog");
    c1.payment = 100;
    strcpy(c2.fullname,"cat");
    c2.payment = 200;
    strcpy(c3.fullname,"pig");
    c3.payment = 300;

    s.Push(c1);
    s.Push(c2);
    s.Push(c3);

    s.showStack();

    s.Pop(c1);
    s.showStack();

    Customer T;
    s.Push(T);
    s.showStack();

    s.Pop(T);
    s.showStack();




    return 0;
}
