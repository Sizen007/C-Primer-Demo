//
// Created by sizen on 11.05.20.
//

#ifndef U9_4_SALES_H
#define U9_4_SALES_H
#include <iostream>
using namespace std;

namespace SALES{
    const int Quarters = 4;
    struct Sales{
        double sales[Quarters];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s,const double ar[],int n){
        double average = 0;
        double sum = 0;
        double max = 0;
        double min = 100000;
        for(int i = 0;i < n;i++){
            s.sales[i] = ar[i];
            sum += ar[i];
            if(ar[i]>max){
                max = ar[i];
            }
            if(ar[i]<min){
                min = ar[i];
            }
        }
        average = sum/n;
        cout<<"min is "<<min<<" "<<"max is "<<max<<" "<<"average is "<<average<<endl;
    }

    void setSales(Sales &s){
        double sale[4];
        double average = 0;
        double sum = 0;
        double max = 0;
        double min = 100000;
        for(int i = 0;i < 4;i++){
            cout<<"Please fill the sales of "<<i<<" Quarter"<<endl;
            cin>>sale[i];
            s.sales[i] = sale[i];
            sum += sale[i];
            if(sale[i] > max){
                max = sale[i];
            }
            if(sale[i] < min){
                min = sale[i];
            }
        }
        average = sum/4;
        cout<<"min is "<<min<<" "<<"max is "<<max<<" "<<"average is "<<average<<endl;
    }

    void showSales(const Sales &s,int n){
        for(int i = 0; i < n;i++){
            cout<<"Sales of "<<i<<" Quarater is "<<s.sales[i]<<endl;
        }
    }


}


#endif //U9_4_SALES_H
