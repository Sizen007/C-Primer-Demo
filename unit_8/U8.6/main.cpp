#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T* a, int len){
    T max = -1;
    for(int i = 0 ; i < len ; i++)
        max = max < a[i] ? a[i] : max;
    return max;
}


char* maxn(char* a[],int len){
    int max = -1;
    char*p = NULL;
    for(int i = 0; i < len; i++){
        if((int)strlen(a[i])> max){
            max = strlen(a[i]);
            p = a[i];
        }
    }
    return p;
}

char* min(char* a[],int len){
    int min = 10;
    char*p = NULL;
    for(int i = 0;i<len;i++){
        if(strlen(a[i])<min){
            min = strlen(a[i]);
            p = a[i];
        }
        return p;
    }

}


int main() {
    int a[6] = {21,45,82,11,21,2};
    double b[4] = {2.3,5.4,1.2,3.3};
    cout<<"a: "<<maxn(a,6)<<endl;
    cout<<"b: "<<maxn(b,4)<<endl;
    cout<<"get max: "<<endl;
    char* name[5] = {"fuck","fuckfuck","123456","zhang","wring"};
    cout<<maxn(name,5)<<endl;

    cout<<"get min: "<<endl;
    cout<<min(name,5)<<endl;

    return 0;
}
