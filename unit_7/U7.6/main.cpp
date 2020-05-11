#include <iostream>
using namespace std;

int Fill_array(double *q,int size){
    cout<<"Please cin in double "<<endl;
    int i;
    for(i = 0;i<size;i++){
        cin>>q[i];
        if(q[i] < 0){
            break;
        }
    }
    cout<<endl;
    return i;
}

void Show_array(double *q,int size){
    cout<<"The array is "<<endl;
    for(int i = 0;i < size;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

void Reverse_array(double *q,int size){
    cout<<"The reverse array is "<<endl;
    for(int i = size-1;i>=0;i--){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

int main() {
    double a[10];
    int size = Fill_array(a,10);
    Show_array(a,size);
    Reverse_array(a,size);


    return 0;
}
