#include <iostream>
#include <cstring>
#include "Customer.h"
using namespace std;

int main() {
    Stack s;
    Customer c1,c2,c3;
    strcpy(c1.fullname,"pig");
    c1.payment = 100;
    strcpy(c2.fullname,"cat");
    c2.payment = 200;
    strcpy(c3.fullname,"dog");
    c3.payment = 300;

    s.Push(c1);
    s.Push(c2);
    s.Push(c3);
    s.display();

//    s.Delete(c2);
//    s.display();

    Customer T;
    s.Push(T);
    s.display();

    return 0;
}
