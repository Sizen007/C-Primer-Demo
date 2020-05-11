#include <iostream>
using namespace std;
template <typename T>
T max5(T* a){
    T max = 0;
    for(int i = 0;i < 5;i++){
        max = max < a[i] ? a[i]:max;
    }
    cout<<"max is "<<max<<endl;
    return max;
}

int main() {
    int a[5] = {1,2,3,4,5};
    double b[5] = {2.3,5.4,3.7,2.5,1.2};
    max5(b);
    return 0;
}
