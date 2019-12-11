#include <iostream>
#include "sales.h"
namespace SALES
{
    

void setSales(Sales& s, const double ar[], int n)
{
    if(ar == nullptr)
    {
        for(int i = 0; i < n; i++)
        {
            s.sales[i] = 0;
        }
        s.max = 0;
        s.min = 0;
        s.average = 0;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        s.sales[i] = ar[i];
    }

    s.max = s.min = s.sales[0];
    double total = 0;
    for(int i = 0; i < n; i++)
    {
        if(s.max < s.sales[i])
        {
            s.max = s.sales[i];
        }
        if(s.min > s.sales[i])
        {
            s.min = s.sales[i];
        }
        total += s.sales[i];
    }
    s.average = total / n;
}


void setSales(Sales& s)
{
    using namespace std;
    cout << "please input your data: ";
    cin>>s.sales[0];
    for(int i = 1; i < 4;i++)
    {
        cout << "please input your data: ";
        cin>>s.sales[i];
    }
    s.max = s.min = s.sales[0];
    double total = 0;
    for(int i = 0; i < 4; i++)
    {
        if(s.max < s.sales[i])
        {
            s.max = s.sales[i];
        }
        if(s.min > s.sales[i])
        {
            s.min = s.sales[i];
        }
        total += s.sales[i];
    }
    s.average = total / 4;
}

void showSales(const Sales& s)
{
    using namespace std;
    for(int i = 0; i < 4; i++)
    {
        cout << "SALES.sale" << i << ": " << s.sales[i]<<endl;
    }
    cout << "SALES.average: "<< s.average <<endl;
    cout << "SALES.min: " << s.min << endl;
    cout << "SALES.max: " << s.max << endl;
}
}