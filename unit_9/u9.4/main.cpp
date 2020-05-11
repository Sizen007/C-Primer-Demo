#include <iostream>
#include "Sales.h"
using namespace std;
using namespace SALES;

int main() {
    Sales s;
    double arr[4] = {100,200,300,400};
    setSales(s,arr,3);
    //setSales(s);
    showSales(s,4);
}
