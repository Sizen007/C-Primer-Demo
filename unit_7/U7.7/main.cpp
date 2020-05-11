#include <iostream>
using namespace std;

double* fill_array(double *arr, int limit){
    cout<<"Please fill in the array"<<endl;
    int i;
    for(i = 0; i < limit; i++){
        cin>>arr[i];
        if(arr[i] < 0){
            cout<<"This is a negative value"<<endl;
            break;
        }
    }
    return &arr[i];
}

void display(double *begin,double *end){
    cout<<"Show the result"<<endl;
    while (begin != end){
        cout<<*begin<<" ";
        ++begin;
    }
    cout<<endl;
}

int main() {
    double a[10];
    double *b = fill_array(a,10);
    //cout<<"*b is "<<*b<<endl<<"positon is "<<b<<endl;
    display(a,b);
    return 0;
}
