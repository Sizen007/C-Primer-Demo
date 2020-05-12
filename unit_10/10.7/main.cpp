#include <iostream>
#include <cstring>
using namespace std;

class Plorg{
private:
    char m_name[19];
    int m_CI;
public:
    Plorg(char* name = "Plorg",const int CI = 50 );
    void setPlorg(int CI);
    void display();
};

Plorg::Plorg(char *name , const int CI) {
    strcpy(m_name,name);
    m_CI = CI;
}

void Plorg::setPlorg(int CI) {
    m_CI = CI;
}

void Plorg::display() {
    cout<<"name is: "<<m_name<<endl;
    cout<<"CI is: "<<m_CI<<endl;
}

int main() {
    Plorg one;
    one.display();

    one.setPlorg(20);
    one.display();

    Plorg two("dog",100);
    two.display();

    return 0;
}
