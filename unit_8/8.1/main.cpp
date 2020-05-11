#include <iostream>
using namespace std;

void display(char* *p,int num){
    cout<<"display"<<endl;
    for(int i = 0;i < num;i++){
        cout<<*p<<endl;
    }

}

void display_count(char* *p,int flag){
    static int count = 0;
    count++;
    cout<<"count "<<count<<endl;
    for(int i = 0;i < count;i++){
        cout<<*p<<endl;
    }

}

int main() {
    char* inf[] = {"lala"};
    display_count(inf,2);

    display_count(inf,2);
    return 0;
}
