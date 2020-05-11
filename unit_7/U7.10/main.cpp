#include <iostream>
using namespace std;

double add(double a,double b){
    return a+b;
}

double mul(double a,double b){
    return a*b;
}

double calculate(double a,double b,double (*pf)(double a,double b)){
    return (*pf)(a,b);
}

int main() {
    double (*pf[3])(double,double);
    pf[0] = add;
    pf[1] = mul;
    cout<<(*pf[0])(10.4,5.4)<<endl;
    cout<<calculate(10.4,5.4,add);
    cout<<calculate(10.4,5.4,mul);

    return 0;
}
