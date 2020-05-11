#include <iostream>
using namespace std;

double GetMean(double a, double b){
    double mean = 2.0*a*b/(a+b);
    return mean;
}


int main() {
    double a,b;
    cout<<"Please cin a&b"<<endl;
    cin>>a ;
    cin>>b ;
    if(a != 0 && b != 0 ){
        cout<<"mean is "<<GetMean(a,b);
    }else{
        cout<<" some value is equal to 0"<<endl;
    }

    return 0;
}
