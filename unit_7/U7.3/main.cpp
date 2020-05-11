#include <iostream>
using namespace std;

class Box{
public:
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};



void display(Box a){
    cout<<a.maker<<" "<<a.height<<" "<<a.width<<" "<<a.length<<" "<<a.volume<<endl;
}

void display2(Box* a){
    a->volume = a->height * a->length * a->width;
    cout<<a->maker<<" "<<a->height<<" "<<a->width<<" "<<a->length<<" "<<a->volume<<endl;
}

int main() {
    Box box = {"zhang",178,50,12,12};
    display(box);
    display2(&box);
    return 0;
}
