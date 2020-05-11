#include <iostream>
#include <cstring>
using namespace std;

struct Stringy{
    char* str;
    int ct;
};

void set(Stringy &p, const char* c){
    int len = strlen(c);
    p.ct = len;
    p.str = new char[len+1];
    strcpy(p.str,c);
}

void show(const char *str, const int count)
{
    for(int i = 0 ; i < count ; ++i)
        cout << str << endl;
}

void show(const Stringy &s, const int count=1);

void show(const Stringy &s, const int count)
{
    for(int i = 0 ;i < count ; ++i)
        cout << s.str << endl;
}


int main() {
    Stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany,testing);
    show(beany);
    cout<<"2"<<endl;
    show(beany,2);


    return 0;
}
