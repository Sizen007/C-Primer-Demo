#include <iostream>
#include "Move.h"
using namespace std;

int main() {
    Move one(0,0);
    Move two(2,3);
    one.add(two);
    one.showmove();

    one.reset(5,5);
    one.showmove();
    return 0;
}
