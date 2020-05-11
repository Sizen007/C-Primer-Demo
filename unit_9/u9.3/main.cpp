#include <iostream>
#include <cstring>
using namespace std;

struct Chaff{
    char dross[20];
    int slag;
};

int main() {
    Chaff *p = new Chaff[2];
    for(int i = 0;i < 2;i++){
        char name[20];
        cin>> name;
        strcpy(p[i].dross,name);
        cout<<"name is "<<p[i].dross<<endl;
    }
    delete [] p;
    return 0;
}
