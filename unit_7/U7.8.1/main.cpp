#include <iostream>
#include <array>
using namespace std;

struct Expense{
    double cost[4];
};

void fill_array(const char* *a,array<double,4> *b){
    for(int i = 0;i < 4;i++){
        cout<<"The cost of"<<*a<<" is ";
        cin >> (*b)[i];
        a++;
    }
}

void show_array(const char* *a,array<double,4> *b){
    cout<<"The result is "<<endl;
    int sum = 0;
    for(int i = 0;i < 4;i++){
        cout<<"The result of"<<*a<<" is ";
        cout<<(*b)[i]<<endl;
        a++;
        sum+=(*b)[i];
    }
    cout<<"The total is "<<sum<<endl;
}

void fill_struct(const char* *a,Expense* b){
    for(int i = 0;i < 4;i++){
        cout<<"The cost of "<<*a<<" is ";
        cin>>b->cost[i];
        a++;
    }
}

void show_struct(const char* *a,Expense* b){
    cout<<"The result is: "<<endl;
    int sum = 0;
    for(int i = 0;i < 4;i++){
        cout<<"The result of"<<*a<<" is ";
        cout<<b->cost[i]<<endl;
        sum+=b->cost[i];
    }
    cout<<"The total result is "<<sum<<endl;

}

void fill(const char* *a, double* b){
    for(int i = 0;i < 4;i++){
        cout<<"The cost of "<<*a<<" is ";
        cin>>b[i];
        a++;
    }
}

void show(const char* *a,double *b){
    cout<<"The result is:"<<endl;
    int sum = 0;
    for(int i = 0;i < 4;i++){
        cout<<"The result of"<<*a<<" is ";
        cout<<b[i]<<endl;
        sum += b[i];
    }
    cout<<"The total cost is "<<sum<<endl;
}

int main() {

    const char *Season[4] = {"Spring","Summer","Fall","Winter"};
    double expense[4];
    Expense e;
    array<double,4> ex;
    fill_array(Season,&ex);
    show_array(Season,&ex);

//    fill_struct(Season,&e);
//    show_struct(Season,&e);

//    fill(Season,expense);
//    show(Season,expense);

    return 0;
}
