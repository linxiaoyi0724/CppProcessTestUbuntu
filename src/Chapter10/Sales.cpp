#include "./Sales.h"
#include <iostream>

namespace SL
{
    Sales::Sales()
    {

    }
    
    Sales::Sales(const double ar[], int n)
    {
        double sum = 0;
        double maxSale = 0;
        double minSale = 0;
        for(int i = 0; i < n; i++)
        {
            sales[i] = ar[i];
            sum += ar[i];
            maxSale = maxSale > ar[i] ? maxSale : ar[i];
            minSale = minSale < ar[i] ? minSale : ar[i]; 
        }

        averge = sum / n;
        max = maxSale;
        min = minSale;
    }

    void Sales::setSales(Sales& s)
    {
        for(int i = 0; i < QUARTERS; ++i)
        {
            sales[i] = s.sales[i];
        }
        max = s.max;
        min = s.min;
        averge = s.averge;
    }

    void Sales::showSales(const Sales& s) const
    {
        std::cout << "The sales is: ";
        for(int i = 0; i < QUARTERS; i++)
        {
            std::cout << s.sales[i] << " ";
        }

        std::cout << std::endl;
        std::cout << "The average: " << s.averge << std::endl;
        std::cout << "The max: " << s.max << std::endl;
        std::cout << "The min: " << s.min << std::endl;
    }

    Sales::~Sales()
    {
        std::cout << "THe sales instance is closed." << std::endl;
    }
}