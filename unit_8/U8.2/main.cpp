#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar{
    char name[10];
    double weight;
    int ca;
};

void setCandyBar_1(CandyBar &b, const char *s = "Millennium Munch", const double w = 2.85, const int h = 350);

void SetCandyBar(CandyBar &c,const char* p_name,const double p_weight, const int p_ca){
    strcpy(c.name,p_name);
    c.weight = p_weight;
    c.ca = p_ca;
}

void display(CandyBar &c){
    cout<<c.name<<" "<<c.weight<<" "<<c.ca<<endl;
}

int main() {
    CandyBar c;

    char name[10];
    double weight;
    int ca;

    cout<<"Please fill the information"<<endl;
    cin>>name>>weight>>ca;
    SetCandyBar(c,name,weight,ca);
    display(c);

    return 0;
}
