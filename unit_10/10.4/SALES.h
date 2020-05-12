//
// Created by sizen on 12.05.20.
//

#ifndef INC_10_4_SALES_H
#define INC_10_4_SALES_H
#include <iostream>
#include <cstring>
using namespace std;
const int QUARTERS = 4;
namespace SALES{
    class Sale{
    private:
        double m_sales[QUARTERS];
        double m_averages = 0;
        double m_max = 0;
        double m_min = 10000;
    public:
        Sale();
        Sale(double [],int);
        void showSales()const;
    };
    Sale::Sale() {
        double sales[4];
        int sum=0;
        for(int i = 0;i < 4;i++){
            cout<<"Please enter "<<i<<" quarter sales: "<<endl;
            cin>>sales[i];
            m_sales[i] = sales[i];
            sum += sales[i];
            m_max = sales[i]>m_max ? sales[i]:m_max;
            m_min = sales[i]<m_min ? sales[i]:m_min;
        }
        m_averages = sum/4;
    }

    Sale::Sale(double *a, int n) {
        int sum = 0;
        for(int i = 0;i < n;i++){
            m_sales[i] = a[i];
            sum += a[i];
            if(a[i]>m_max){
                m_max = a[i];
            }
            if(a[i]<m_min){
                m_min = a[i];
            }
        }
        m_averages = sum/n;
    }
    void Sale::showSales() const {
        for(int i = 0;i<4;i++){
            cout<<"The sales of "<<i<<" quarter is "<<m_sales[i]<<endl;
        }
        cout<<"max sale is "<<m_max<<endl;
        cout<<"min sale is "<<m_min<<endl;
        cout<<"average sale is "<<m_averages<<endl;
    }

}

#endif //INC_10_4_SALES_H
