#include <iostream>
using namespace std;

double input(double *a){
    cout << "Please cin result" << endl;
    int i;
    for(i = 0;i < 10; i++){
        cin>>a[i];
        if (a[i]<0)
            break;
    }
    return i;
}

void display(double *a,int num){
    cout<<"Show the result"<<endl;
    for(int i = 0; i < num;i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;
}

double sum(double *a,int num){
    cout<<"Sum of the result"<<endl;
    int sum;
    for(int i = 0;i < num;i++){
        sum += a[i];
    }
    cout<<"sum is "<<sum<<endl;
    return sum;
}

int main() {
    double a[10];
    int num = input(a);
    display(a,num);
    sum(a,num);

    return 0;
}
