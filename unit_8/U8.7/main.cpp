#include <iostream>
using namespace std;

struct debets{
    char name[50];
    double amount;
};

template <typename T>
void ShowArray(T arr[],int n){
    int sum = 0;
    cout<<"template A: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<' ';
        sum+=arr[i];
    }
    cout<<endl;
    cout<<"sum of things is "<<sum<<endl;
}

template <typename T>
void ShowArray(T *arr[],int n){
    double sum = 0;
    cout<<"template B:";
    for(int i = 0;i < n;i++){
        cout<<*arr[i]<<' ';
        sum += *arr[i];
    }
    cout<<endl;
    cout<<"sum of debets is "<<sum<<endl;
}

int main() {
    int things[6] = {13,31,103,301,310,130};
    struct debets mr_E[3] = {
            {"Ima Wolfe",2400.0},
            {"Ura Foxe",1300.0},
            {"Iby",1800.0}
    };
    double *pd[3];

    for(int i = 0;i < 3;i++){
        pd[i] = &mr_E[i].amount;
    }
    cout<<"Listening Mr.E's counts of things ";
    ShowArray(things,6);

    cout<<"Listening Mr.E's debts ";
    ShowArray(pd,3);
    return 0;
}
