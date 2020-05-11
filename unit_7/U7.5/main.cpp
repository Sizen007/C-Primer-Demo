#include <iostream>
using namespace std;

int jiecheng(int a){
    int result = 1;
    if(a < 0){
        cout<<"this is a negative number"<<endl;
    }else {
        for(int i = a;i > 0; --i){
            result *= i;
        }
        cout<<"result is "<<result<<endl;
    }

}

int main() {
    cout<<"Please cin a number"<<endl;
    int a;
    cin>>a;
    jiecheng(a);
    return 0;
}
