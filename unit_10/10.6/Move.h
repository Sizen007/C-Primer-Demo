//
// Created by sizen on 12.05.20.
//

#ifndef INC_10_6_MOVE_H
#define INC_10_6_MOVE_H
#include <iostream>
using namespace std;

class Move{
private:
    double m_x;
    double m_y;
public:
    Move(double a = 0, double b = 0);
    void showmove()const;
    Move add(const Move &m);
    Move reset(double a = 0,double b = 0);
};

Move::Move(double a, double b) {
    m_x = a;
    m_y = b;
}

Move Move::add(const Move &m){
    m_x += m.m_x;
    m_y += m.m_y;
}

Move Move::reset(double a, double b) {
    m_x = a;
    m_y = b;
}

void Move::showmove() const {
    cout<<"m_x: "<<m_x<<endl;
    cout<<"m_y: "<<m_y<<endl;
}

#endif //INC_10_6_MOVE_H
