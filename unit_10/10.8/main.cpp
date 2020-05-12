#include <iostream>
#include <cstring>
using namespace std;

struct Content{
    char m_char[10] = {' '};
    int m_int = 0;
    double m_double = 0;
    int m_arr[5] = {0};
};

typedef Content Element;

class List{
private:
    int m_size;
    static const int m_capacity = 10;
    Element Item[m_capacity];
public:
    void display();
    void visit(void (*pf)(Element &));
    bool isEmpty()const;
    bool isFull()const;
    bool Push(Element data);
};
void List::visit(void (*pf)(Element &)) {
    for(int i = 0;i<m_size;i++){
        (*pf)(Item[i]);
    }
}

void List::display() {
    cout<<"Iteam"<<endl;
    cout<<Item->m_char<<endl;
    cout<<Item->m_int<<endl;
    cout<<Item->m_double<<endl;
    cout<<Item->m_arr<<endl;
}

bool List::isEmpty() const {
    return m_size <= 0 ? true:false;
}

bool List::isFull() const {
    return m_size >= m_capacity ? true:false;
}

bool List::Push(Element data) {
    if(isFull() == true){
        return false;
    }else{
        Item[m_size++] = data;
        return false;
    }
}

int main() {
    Element c1;
    List one;
    one.display();
    one.visit(*c1);
    return 0;
}
