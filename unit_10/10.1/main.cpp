#include <iostream>
#include "Account.h"
using namespace std;


int main() {
    Account zhang;
    zhang.setAccount();
    zhang.display();

    zhang.setAccount("wang","2",200);
    zhang.display();
    return 0;
}
