#include <iostream>
using namespace std;

void Set_string(string &p){
    for(int i = 0;i<p.size();i++){
        p[i] = toupper(p[i]);
    }
}

void Show_string(string *p){
    cout<<*p<<endl;
}

int main() {
    string s;
    cout<<"Enter a string (q to quit): ";
    //cin>>s;
    while(cin>>s&&s[0] != 'q'){
        Set_string(s);
        Show_string(&s);
    }

    return 0;
}
