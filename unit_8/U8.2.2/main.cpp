#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar{
    char name[10];
    double weight;
    int ca;
};

void SetCandyBar(CandyBar &c,char* name,double weight,int ca){
    strcpy(c.name,name);
    c.weight = weight;
    c.ca = ca;
}

void Disp(CandyBar &c){
    cout<<c.name<<" "<<c.weight<<" "<<c.ca<<endl;
}

int main() {
    CandyBar c;
    char name[10];
    double weight;
    int ca;
    cout<<"Please fill the information: "<<endl;
    cin>>name>>weight>>ca;
    SetCandyBar(c,name,weight,ca);
    Disp(c);
    return 0;
}
