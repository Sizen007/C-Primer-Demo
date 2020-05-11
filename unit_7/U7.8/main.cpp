#include <iostream>
#include <array>
using namespace std;

const int Seasons = 4;
const array<string,Seasons> Snames = {"Spring","Summer","Fall","Winter"};

struct Expense{
    double expense[4];
};

void fill(const char* *p,Expense* e){
    for(int i = 0;i < Seasons;i++){
        cout<<"Enter"<<*p++<<"expenses: ";
        cin>>e->expense[i];
    }
    cout<<endl;

}

int main() {

    const char *Seasons[4] = {"Spring","Summer","Fall","Winter"};
//    double expense[4];
//    fill(Seasons,expense);

    Expense e;
    fill(Seasons,&e);

    return 0;
}
