//
// Created by sizen on 11.05.20.
//

#ifndef U9_1_GOLF_H
#define U9_1_GOLF_H
#include <cstring>
#include <iostream>
using namespace std;

const int Len = 40;
struct golf{
    char fullname[Len];
    int handicap;
};

void setgolf(golf &g, const char *name, int hc){
    strcpy(g.fullname,name);
    g.handicap = hc;
}

int setgolf(golf &g){
    char name[30];
    int hc;
    cout<<"Please fill the name: "<<endl;
    cin>>name;
    strcpy(g.fullname,name);
    cout<<"Please fill the handicap: "<<endl;
    cin>>hc;
    g.handicap = hc;
    if(g.fullname == NULL){
        return 0;
    }else{
        return 1;
    }
}

void handicap(golf &g,int hc){
    g.handicap = hc;
    cout<<"New handicap is: "<<g.handicap<<endl;
}

void showgolf(golf &g){
    cout<<"name is "<<g.fullname<<" and handicap is "<<g.handicap<<endl;
}

#endif //U9_1_GOLF_H
