#include <iostream>
#include "golf.h"
using namespace std;

int main() {
    golf ann;
    setgolf(ann,"Ann Birdfree",24);
    showgolf(ann);

    golf andy;
    //setgolf(andy);
    cout<<setgolf(andy)<<endl;
    showgolf(andy);
    return 0;
}
