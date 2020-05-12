#include <iostream>
#include <cstring>
using namespace std;

const int Len = 40;

class Golf{
private:
    char m_fullname[Len];
    int m_handicap;
public:
    Golf();
    Golf(const char*, int);
    int setGolf();
    void showGolf()const;
};

Golf::Golf() {

}

Golf::Golf(const char * fn, int hc) {
    strcpy(m_fullname,fn);
    m_handicap = hc;
}

int Golf::setGolf() {
    int handicap;
    char fullname[Len];
    cout<<"Please enter the fullname: "<<endl;
    cin>>fullname;
    cout<<"Please enter the handicap: "<<endl;
    cin>>handicap;
    Golf g(fullname,handicap);
    *this = g;
    this->showGolf();
}

void Golf::showGolf()const {
    cout<<"Fullname is: "<<m_fullname<<" handcap is: "<<m_handicap<<endl;
}

int main() {
    Golf one("wang",20);
    one.showGolf();
    one.setGolf();

    return 0;
}
